#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int money = 0;
//	int toble = 0;
//	int empty = 0;
//	scanf("%d",&money);
//
//	toble = money;
//	empty = money;
//	while (empty >= 2)
//	{
//		toble += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//
//	printf("%d\n",toble);
//	return 0;
//}

//根据输入的日期，计算是这一年的第几天。
//保证年份为4位数且日期合法。
//进阶：时间复杂度：O(n)\O(n) ，空间复杂度：O(1)\O(1)
//#include <stdlib.h>
//#include <stdio.h>
//
//int main()
//{
//    int month_days[12] = { 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365 };
//    int year, month, day;
//    while (scanf("%d %d %d\n", &year, &month, &day) != EOF)
//    {
//        int days = 0;
//        if (month >= 2)
//            days = month_days[month - 2] + day;
//        else
//            days = day;
//        if (((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) && month > 2)
//            days++;
//        printf("%d\n", days);
//    }
//    return 0;
//}

////验证尼科彻斯定理，即：任何一个整数 m 的立方都可以写成 m 个连续奇数之和
//#include<stdio.h>
//
//int main()
//{
//    int m = 0;
//    while (scanf("%d", &m) != EOF)
//    {
//        int tri = m * m * m;
//        //数学计算得等差数列第一项a1=m*m-m+1
//        int a1 = m * m - m + 1;
//        for (int i = 0; i < m - 1; i++)
//        {
//            printf("%d+", a1 + 2 * i);
//        }
//        printf("%d\n", a1 + 2 * (m - 1));
//    }
//    return 0;
//}