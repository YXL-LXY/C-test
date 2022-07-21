#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//int main()
//{
//	int arr[40] = { 0 };
//	int i = 0;
//	for (i = 0; i < 40; i++)
//	{
//		if (i == 0)
//		{
//			arr[i] = 0;
//		}
//		else if (i == 1 || i == 2)
//		{
//			arr[i] = 1;
//		}
//		else
//		{
//			arr[i] = arr[i - 1] + arr[i - 2];
//		}
//	}
//
//	int n = 0;
//	scanf("%d", &n);
//	i = 0;
//	while (n > arr[i])
//	{
//		i++;
//	}
//	int ret = arr[i] - n < n - arr[i - 1] ? arr[i] - n : n - arr[i - 1];
//	printf("%d\n", ret);
//	return 0;
//}


//字符串左旋

//void left_reverse(char* arr, int len, int k)
//{
//	while (k--)
//	{
//		char ch = 0;
//		int i = 0;
//		ch = arr[0];
//		for (i = 0; i < len - 1; i++)
//		{
//			arr[i] = arr[i + 1];
//		}
//		arr[len - 1] = ch;
//	}
//}
//
//int main()
//{
//	char arr[] = "ABCDEFG";
//	int len = strlen(arr);
//	int k = 0;
//	scanf("%d", &k);
//	left_reverse(arr, len, k);
//	printf("%s\n", arr);
//	return 0;
//}


//杨氏矩阵


//int find_num(int arr[3][3], int num, int* px, int* py)
//{
//	//从右上角开始找
//	int x = *px - 1;
//	int y = 0;
//	while (x >= 0 && y < *py)
//	{
//		if (num > arr[x][y])
//		{
//			y++;
//		}
//		else if (num < arr[x][y])
//		{
//			x--;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int x = 3;
//	int y = 3;
//	int num = 5;
//
//	int ret = find_num(arr, num, &x, &y);
//	if (ret == 1)
//	{
//		printf("找到了，下标是：%d %d\n",x,y);
//	}
//	else if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

