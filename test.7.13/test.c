#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//void print(int n)
//{
//	int i = 0;
//	printf("奇数位：");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//
//	printf("\n偶数位：");
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//}



int main()
{
	int a = 5;
	int b = 10;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	printf("a=%d,b=%d\n", a, b);
	return 0;
}