#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<assert.h>
//void reverse(char* str)
//{
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[256] = { 0 };
//	gets(arr);
//	reverse(arr);//逆序函数
//	printf("%s",arr);
//	return 0;
//}



//求0-100000的自幂数并打印出来
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		//确定i是几位数
//		int n = 1;
//		int ret = i;
//		while (ret /= 10)
//		{
//			n++;
//		}
//		ret = i;
//		int sum = 0;
//		while (ret)
//		{
//			sum += pow(ret % 10, n);
//			ret /= 10;
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}




//5位运动员参加10米台跳水比赛，有人让他们预测比赛结果：
//
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛名次。

//穷举法
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							if(a*b*c*d*e == 120)
//							printf("a=%d,b=%d,c=%d,d=%d,e=%d\n",a,b,c,d,e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}




//反转字符串

//三步反转法

void reverse(char* left,char* right)
{
	assert(left);
	assert(right);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void left_move(char* arr, int k)
{
	assert(arr);
	int len = strlen(arr);
	assert(k <= len);
	reverse(arr,arr+k-1);//逆序左边
	reverse(arr+k,arr+len-1);//逆序右边
	reverse(arr,arr+len-1);//逆序整体

}

int main()
{
	int n = 0;
	char arr[] = "abcdef";
	printf("请输入反转字符个数：");
	scanf("%d",&n);
	left_move(arr, n);
	printf("%s\n", arr);
	return 0;
}
