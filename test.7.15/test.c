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

//������������ڣ���������һ��ĵڼ��졣
//��֤���Ϊ4λ�������ںϷ���
//���ף�ʱ�临�Ӷȣ�O(n)\O(n) ���ռ临�Ӷȣ�O(1)\O(1)
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

////��֤��Ƴ�˹���������κ�һ������ m ������������д�� m ����������֮��
//#include<stdio.h>
//
//int main()
//{
//    int m = 0;
//    while (scanf("%d", &m) != EOF)
//    {
//        int tri = m * m * m;
//        //��ѧ����õȲ����е�һ��a1=m*m-m+1
//        int a1 = m * m - m + 1;
//        for (int i = 0; i < m - 1; i++)
//        {
//            printf("%d+", a1 + 2 * i);
//        }
//        printf("%d\n", a1 + 2 * (m - 1));
//    }
//    return 0;
//}