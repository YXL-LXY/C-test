#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>


//1.
//int lcm(int m, int n)
//{
//	int r = 0;
//	int x = m;
//	int y = n;
//	while (r = m % n)
//	{
//		m = n;
//		n = r;
//	}
//	//此时n为最大公约数
//	return x * y / n;//最小公倍数
//}
//
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d",&a,&b,&c);
//	int ret1 = lcm(a, b);
//	int ret = lcm(ret1,c);
//	printf("%d\n",ret);
//	return 0;
//}







//2.
//x y 不能表示的最大数为x*y-x-y
//int main()
//{
//	int x, y;
//	scanf("%d %d", &x, &y);
//	printf("%d",x*y-x-y);
//	return 0;
//}


//暴力算法
//int main()
//{
//	int m, n, i, a, b, p;
//	scanf("%d %d",&m,&n);
//	int Max = 0;
//	for (i = 1; i < 100000; i++)
//	{
//		a = i % m;
//		b = i % n;
//		p = 0;
//		while (a <= i)
//		{
//			if (a % n == 0)
//			{
//				p = 1;
//				break;
//			}
//			a = a + m;
//		}
//		while (b <= i)
//		{
//			if (b % m == 0)
//			{
//				p = 1;
//				break;
//			}
//			b = b + n;
//		}
//		if (p == 0)
//		{
//			if (i > Max)
//				Max = i;
//		}
//	}
//	printf("%d", Max);
//	return 0;
//}


//
////3.翻硬币
//
//char s[1000];
//char d[1000];
//
//int difNum()
//{
//	int i = 0;
//	int counts = 0;
//	while (s[i] != '\0')
//	{
//		if (s[i] != d[i])
//			counts++;
//		i++;
//	}
//	return counts;
//}
//
//int main()
//{
//	scanf("%s", s);
//	scanf("%s", d);
//	int p[1000] = {0};
//	int i = 0, j = 0, sumLen = 0, num = 0, difLen = 0;
//	while (s[i] != '\0')
//	{
//		sumLen++;
//		if (s[i] != d[i])
//		{
//			p[j++] = i;
//			difLen++;
//		}
//		i++;
//	}
//	j = 0;
//	int g = 0;
//	while (1)
//	{
//		for (i = p[j]; i < sumLen - 1; i++)
//		{
//			if (s[i] == '*')
//				s[i] = 'o';
//			else s[i] = '*';
//			if (s[i + 1] == '*')
//				s[i + 1] = 'o';
//			else s[i + 1] = '*';
//			num++;
//			if (difNum() == 0)
//			{
//				g = 1;
//				break;
//			}
//			else if (difNum() == difLen - 2)
//			{
//				difLen = difLen - 2;
//				j += 2;
//				break;
//			}
//		}
//		if (g == 1)
//			break;
//	}
//	printf("%d",num);
//	return 0;
//}


//验证尼科彻斯定理，即：任何一个整数m的立方都可以写成m个连续奇数之和
// 例如：
// 1^3=1
// 2^3=3+5
// 3^3=7+9+11
// 4^3=13+15+17+19
// 
//int main()
//{
//	int m = 0;
//	while (scanf("%d", &m) != EOF)
//	{   //n*a1+n*(n-1)/2*d
//		int i = 1;
//		int power = m * m * m;
//		for (i = 1; i < power; i += 2)
//		{
//			int a = m * i;
//			int b = m * (m - 1);
//			if (a + b == power)
//				//退出循环此时i就是等差的a1
//				break;
//		}
//		int count = 0;
//		while (count < m)
//		{
//			if (count != m - 1)
//			{
//				printf("%d+", i);
//			}
//			else
//			{
//				printf("%d\n", i);
//			}
//			i += 2;
//			count++;
//		}
//	}
//	return 0;
//}
