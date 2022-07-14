#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>

//void print(int* p,int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	print(arr,10);
//	return 0;
//}


//×Ö·û´®ÄæÐò

//void reverse(char* arr)
//{
//	int len = strlen(arr);
//	char* left = arr;
//	char* right = arr + len - 1;
//	while (left < right)
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
//	char arr[10000] = {'\0'};
//	gets(arr);
//	reverse(arr);
//	printf("%s", arr);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[5] = {0};
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		int j = i+1;
//		while (j--)
//		{
//			arr[i] += n * pow(10, j);
//		}
//	}
//	int num = 0;
//	for (i = 0; i < 5; i++)
//	{
//		num += arr[i];
//	}
//	printf("%d\n", num);
//	return 0;
//}


//int main()
//{
//	for (int i = 0; i < 100000; i++)
//	{
//		int n = 1;
//		int m = i;
//		int sum = 0;
//		while (m /= 10)
//		{
//			n++;//¼ÆËãÎ»Êý
//		}
//
//		m = i;
//		while (m)
//		{
//			sum += pow(m % 10, n);
//			m /= 10;
//		}
//
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



//´òÓ¡ÁâÐÎ
//int main()
//{
//	int n = 13;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n / 2 + 1; i++)
//	{
//		for (j = 0; j < n / 2 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < i * 2 + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	for (i = n / 2 + 1; i < n; i++)
//	{
//		for (j = 0; j < i - n / 2; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < n - 2 * (i - n / 2); j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}