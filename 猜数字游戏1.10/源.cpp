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
		printf("请猜数字\n");
		scanf_s("%d", &num);
		if (num > ret)
			printf("猜大了\n");
		if (num < ret)
			printf("猜小了\n");
		if (num == ret) {
			printf("恭喜你，猜对了\n");
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
		printf("请选择：\n");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:game(); break;
		case 0:printf("退出游戏\n"); break;
		default:printf("选择错误\n"); break;
		}
	} while (input);
	return 0;
}