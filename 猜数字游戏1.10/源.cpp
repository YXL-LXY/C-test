#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define _CRT_SECURE_NO_WARNINGS 1

void menu()
{
	printf("********************************************************\n");
	printf("*********       1.play             0.exit       ********\n");
	printf("********************************************************\n");
}

void game()
{
	int ret = 0;
	int num = 0;
	ret = rand() % 100 + 1;
	while (1)
	{
		printf("�������\n");
		scanf_s("%d", &num);
		if (num > ret)
			printf("�´���\n");
		if (num < ret)
			printf("��С��\n");
		if (num == ret) {
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}
int main()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:game(); break;
		case 0:printf("�˳���Ϸ\n"); break;
		default:printf("ѡ�����\n"); break;
		}
	} while (input);
	return 0;
}