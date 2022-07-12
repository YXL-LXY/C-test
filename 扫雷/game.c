#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}


void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//��ӡ�к�
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//��ӡ�к�
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % row + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}

void Expand(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	int count = get_mine_count(mine, x, y);
	if (count == 0)
	{
		show[x][y] = ' ';

		if (show[x - 1][y - 1] == '*' && x - 1 > 0 && x - 1 < ROWS && y - 1 > 0 && y - 1 < COLS)
			Expand(mine, show, x - 1, y - 1);
		if (show[x - 1][y] == '*' && x - 1 > 0 && x - 1 < ROWS && y > 0 && y < COLS)
			Expand(mine, show, x - 1, y);
		if (show[x - 1][y + 1] == '*' && x - 1 > 0 && x - 1 < ROWS && y + 1 > 0 && y + 1 < COLS)
			Expand(mine, show, x - 1, y + 1);
		if (show[x][y - 1] == '*' && x > 0 && x < ROWS && y - 1 > 0 && y - 1 < COLS)
			Expand(mine, show, x, y - 1);
		if (show[x][y + 1] == '*' && x > 0 && x < ROWS && y + 1 > 0 && y + 1 < COLS)
			Expand(mine, show, x, y + 1);
		if (show[x + 1][y - 1] == '*' && x + 1 > 0 && x + 1 < ROWS && y - 1 > 0 && y - 1 < COLS)
			Expand(mine, show, x + 1, y - 1);
		if (show[x + 1][y] == '*' && x + 1 > 0 && x + 1 < ROWS && y > 0 && y < COLS)
			Expand(mine, show, x + 1, y);
		if (show[x + 1][y + 1] == '*' && x + 1 > 0 && x + 1 < ROWS && y + 1 > 0 && y + 1 < COLS)
			Expand(mine, show, x + 1, y + 1);

	}
	else
	{
		show[x][y] = count + '0';
	}
}


//�ж�����ϻ�δ���ų�������������ж��Ƿ��������
int IsWin(char show[ROWS][COLS], int row, int col)
{
	int count = 0;
	//����
	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= col; j++)
		{
			if (show[i][j] == '*')
				count++;
		}
	}
	return count;
}


void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;

	while (1)
	{
		printf("�������Ų��׵����꣺");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//����Ϸ�
			//����
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը����\n");
				break;
			}
			else //������
			{
				Expand(mine, show, x, y);
				int ret = IsWin(show, row, col);

				if (ret == EASY_COUNT)
				{
					printf("��ϲ�㣬���׳ɹ�������\n");
					break;
				}

				DisplayBoard(show, row, col);
			}
		}
		else
		{
			printf("����Ƿ�������������\n");
		}
	}
	//��Ϸ�����ˣ���ʾ�˾��׵ķֲ�
	printf("�˾��׵ķֲ�����ͼ��ʾ\n");
	DisplayBoard(mine, row, col);
}