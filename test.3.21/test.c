#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int lcm(int m, int n)
{
	int r = 0;
	int x = m;
	int y = n;
	while (r = m % n)
	{
		m = n;
		n = r;
	}
	//��ʱnΪ���Լ��
	return x * y / n;//��С������
}

int main()
{
	int a, b, c;
	scanf("%d %d %d",&a,&b,&c);
	int ret1 = lcm(a, b);
	int ret2 = lcm(b, c);
	int ret3 = lcm(a, c);
	printf("%d %d %d", ret1,ret2,ret3);
	return 0;
}