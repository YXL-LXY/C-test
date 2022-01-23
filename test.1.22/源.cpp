#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
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
//int Getanswer(int n)
//{
//	int count = 0;
//	while (n > 1)
//	{
//		if (n % 2 == 0)
//		{
//			n /= 2;
//			count++;
//		}
//		else
//		{
//			n = 3 * n + 1;
//			count++;
//		}
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	printf("请输入一个自然数：\n");
//	scanf("%d",&n);
//	int num = Getanswer(n);
//	printf("%d",num);
//	return 0;
//}






//二阶阶乘
//例如：5！！ = 5*3*1 = 15
//6！！ = 6*4*2 = 48

//int DoubleFactorial(int n)
//{
//	long sum = n;
//	for (int i = 1; i < n; i++)
//	{
//		if (n % 2 == 0 && i % 2 == 0)
//		{
//			sum *= i;
//		}
//		else if(n % 2 == 1 && i % 2 == 1)
//		{
//			sum *= i;
//		}
//	}
//	return sum;
//}
//
//int main()
//{
//	int n = 0;
//	printf("请输入数据：\n");
//	scanf("%d",&n);
//	int ret = DoubleFactorial(n);
//	printf("%d",ret);
//	return 0;
//}





//首字母大写
//输入一个英文句子，将每个单词的第一个字母改成大写字母

//int main()
//{
//	int i = 0;
//	char a[100];
//	printf("请输入一个英文句子\n");
//	gets_s(a);
//	for (i = 0; a[i] != '\0'; i++)
//	{
//		if (a[0] <= 'z' && a[0] >= 'a')
//		{
//			a[0] -= 32;
//		}
//		else if (a[i - 1] == ' ' && a[i] >= 'a' && a[i] <= 'z')
//		{
//			a[i] -= 32;
//		}
//	}
//	puts(a);
//}