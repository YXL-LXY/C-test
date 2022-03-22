#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

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


//x y 不能表示的最大数为x*y-x-y
//int main()
//{
//	int x, y;
//	scanf("%d %d", &x, &y);
//	printf("%d",x*y-x-y);
//	return 0;
//}

int main()
{
	int m, n, i, a, b, p;
	scanf("%d %d",&m,&n);
	int Max = 0;
	for (i = 1; i < 100000; i++)
	{
		a = i % m;
		b = i % n;
		p = 0;
		while (a <= i)
		{
			if (a % n == 0)
			{
				p = 1;
				break;
			}
			a = a + m;
		}
		while (b <= i)
		{
			if (b % m == 0)
			{
				p = 1;
				break;
			}
			b = b + n;
		}
		if (p == 0)
		{
			if (i > Max)
				Max = i;
		}
	}
	printf("%d", Max);
	return 0;
}
