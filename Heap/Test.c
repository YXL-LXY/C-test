#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"

void test()
{
	Heap php;
	HPDataType a[] = { 15,30,45,23,48,69,35,57 };
	HeapCreate(&php,a,sizeof(a)/sizeof(a[0]));
	HeapPrint(&php);
}

// TopK���⣺�ҳ�N�����������/��С��ǰK�����⡣
// ���磺δ��������ǰ10�����ɣ�������ͨ��ѧ������ҫ����ǰ10�ĺ��ţ�ȫ������ǰ10����ס��ȵ����ⶼ��Topk���⣬
// ��Ҫע�⣺
// ������ǰK��������K������С��
// ����С��ǰK��������K�����Ĵ��
void PrintTopK(int* a, int n, int k)
{
	//Heap hp;
	//HeapCreate(&hp, a, k);//�����
	//int i = k;
	//for (i = k; i < n; i++)
	//{
	//	if (a[i] < HeapTop(&hp))
	//	{
	//		HeapPop(&hp);
	//		HeapPush(&hp, a[i]);
	//	}
	//}

	//for (i = 0; i < k; i++)
	//{
	//	printf("%d ", HeapTop(&hp));
	//	HeapPop(&hp);
	//}
	//printf("\n");



	//�����
	for (int root = (k - 2) / 2; root >= 0; root--)
	{
		AdjustDown(a, k, root);
	}
	int i = k;
	for (i = k; i < n; i++)
	{
		if (a[i] < a[0])
		{
			Swap(&a[i], &a[0]);
			AdjustDown(a, k, 0);
		}
	}

	for (i = 0; i < k; i++)
	{
		printf("%d ", a[i]);
	}

}
void TestTopk()//��С��
{
	HPDataType a[] = { 15,30,45,23,48,69,35,57 };
	PrintTopK(a, sizeof(a) / sizeof(a[0]), 3);
}

void Heapsort(int* a, int n)//����
{
	//�����
	for (int root = (n - 2) / 2; root >= 0; root--)
	{
		AdjustDown(a, n, root);
	}

	int i = 1;
	while (i < n)
	{
		Swap(&a[0], &a[n - i]);
		AdjustDown(a, n - i, 0);
		++i;
	}
}


int main()
{
	//test();
	TestTopk();
	/*int arr[] = { 12,38,45,76,10,5,37,91,26,7,56};
	int len = sizeof(arr) / sizeof(arr[0]);
	Heapsort(arr,len);
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}*/

	return 0;
}