#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"binary_search.h"
int binary_search(int arr[], int k, int sz);
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int k = 7;
	int ret = binary_search(arr, k, sz);//�ҵ��򷵻��±꣬�Ҳ�������-1

	if (ret == -1)
		printf("�Ҳ���������\n");
	else
		printf("�ҵ��ˣ��±���%d", ret);
	return 0;
}