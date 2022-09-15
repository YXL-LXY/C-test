#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main(void)
{
	double x1, x2, h, y1, y2, n, s;
	n = 1000;
	s = 0;
	x1 = 1;
	for (x2 = 1.001; x2 < 10; x2 += 0.001) {
		y1 = 2 * x1 * x1 + 3 * x1 + 2;
		y2 = 2 * x2 * x2 + 3 * x2 + 2;
		s = s + (y1 + y2) / n / 2;
		x1 = x2;
	}
	printf("定积分的值为:%lf\n", s);
	return 0;
}