#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//巴什博弈
//你正和朋友玩一个游戏，桌子上有一堆石头，每次你们都会从中拿出1到3个石头。拿走最后一个石头的人赢得游戏。游戏开始时，你是先手。
//假设两个人都绝对理性，都会做出最优决策。给定石头的数量，判断你是否会赢。

//举例：有四个石头，那么你必输。无论你拿几个，最后一个都会被你朋友拿走。
//输入：n=4
//输出：False

//输入：n=5
//输出：True
// 先手拿一个，必胜。
//
//int Win(int n)
//{
//	return (n % 4 != 0);
//}
//
//
//int main()
//{
//	int n = 0;
//	printf("请输入石头的数量：\n");
//	scanf("%d", &n);
//	int x = Win(n);
//	if (x == 0)
//	{
//		printf("False");
//	}
//	else
//	{
//		printf("True");
//	}
//	return 0;
//}






//冰雹猜想
//对于任意一个自然数N，如果N是偶数，就把它变成N/2；如果N是奇数，就把它变成3*N+1.
//按照这个法则运算下去，最终必然得1.

//n通过几轮变换，会变成1
int Getanswer(int n)
{
	int count = 0;
	while (n > 1)
	{
		if (n % 2 == 0)
		{
			n /= 2;
			count++;
		}
		else
		{
			n = 3 * n + 1;
			count++;
		}
	}
	return count;
}

int main()
{
	int n = 0;
	printf("请输入一个自然数：\n");
	scanf("%d",&n);
	int num = Getanswer(n);
	printf("%d",num);
	return 0;
}