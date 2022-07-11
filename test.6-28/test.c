#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return n % 10 + DigitSum(n / 10);
//	}
//	else
//		return n;
//}
//
//int main()
//{
//	int num = 1729;
//	int ret = DigitSum(num);
//	printf("%d\n",ret);
//
//	return 0;
//}

//int my_pow(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	else
//		return n * my_pow(n, k - 1);
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	printf("%d\n",my_pow(n,k));
//	return 0;
//}

//int Fibonacci(int n)
//{
//	int arr[100] = {0};
//	arr[0] = arr[1] = 1;
//	for (int i = 2; i < 100; i++)
//	{
//		arr[i] = arr[i - 1] + arr[i - 2];
//	}
//	return arr[n - 1];
//}
//
//int Digui_Fibonacci(int n)
//{
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	else
//		return Digui_Fibonacci(n - 1) + Digui_Fibonacci(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ret = Digui_Fibonacci(n);
//	printf("%d\n", ret);
//	return 0;
//}

//void swap(int* arr1, int* arr2, int n)
//{
//	int tmp = 0;
//	while (n--)
//	{
//		tmp = *(arr1 + n);
//		*(arr1 + n) = *(arr2 + n);
//		*(arr2 + n) = tmp;
//	}
//}
//
//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 6,7,8,9,0 };
//	swap(arr1, arr2, 5);
//	return 0;
//}

//void init(int* arr,int n)
//{
//	while (n--)
//	{
//		if (*arr != 0)
//		{
//			*arr = 0;
//		}
//		arr++;
//	}
//}
//
//void print(int* arr,int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void reverse(int* arr, int n)
//{
//	int left = 0;
//	int right = n - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	//init(arr, 10);
//	reverse(arr, 10);
//	print(arr, 10);
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 3,5,4,1,6,9,0,4,6,7 };
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		int flag = 1;
//		for (int j = 0; j < 10 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//	print(arr, 10);
//	return 0;
//}


