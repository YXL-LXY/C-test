#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"

void test()
{
	Heap php;
	HPDataType a[] = { 15,30,45,23,48,69,35,57 };
	HeapCreate(&php,a,sizeof(a)/sizeof(a[0]));
	HeapPrint(&php);
}

// TopK问题：找出N个数里面最大/最小的前K个问题。
// 比如：未央区排名前10的泡馍，西安交通大学王者荣耀排名前10的韩信，全国排名前10的李白。等等问题都是Topk问题，
// 需要注意：
// 找最大的前K个，建立K个数的小堆
// 找最小的前K个，建立K个数的大堆
void PrintTopK(int* a, int n, int k)
{
	//Heap hp;
	//HeapCreate(&hp, a, k);//建大堆
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



	//建大堆
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
void TestTopk()//找小的
{
	HPDataType a[] = { 15,30,45,23,48,69,35,57 };
	PrintTopK(a, sizeof(a) / sizeof(a[0]), 3);
}

void Heapsort(int* a, int n)//升序
{
	//建大堆
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