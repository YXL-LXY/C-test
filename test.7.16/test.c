#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>

//int my_strlen(char* arr)
//{
//	char* p = arr;
//	while (*p)
//	{
//		p++;
//	}
//	return p - arr;
//}


//char* my_strcpy(char* arr1, const char* arr2)
//{
//	assert(arr1 && arr2);
//	while (*arr2)
//	{
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//	}
//}



//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[20] = "world";
//	my_strcpy(arr1, arr2);
//	printf(arr1);
//	return 0;
//}




//调整奇数偶数顺序

//void fun(int* arr,int n)
//{
//	int left = 0;
//	int right = 10 - 1;
//	while (left < right)
//	{
//		if (arr[left] % 2 == 0)
//		{
//			if (arr[right] % 2 == 1)
//			{
//				int tmp = arr[left];
//				arr[left] = arr[right];
//				arr[right] = tmp;
//			}
//			else
//				right--;
//		}
//		else
//			left++;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 2,5,8,1,4,3,7,6,0,9 };
//	fun(arr,10);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}