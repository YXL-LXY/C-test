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
	Heap hp;
	HeapCreate(&hp, a, k);//�����
	int i = k;
	for (i = k; i < n; i++)
	{
		if (a[i] < HeapTop(&hp))
		{
			HeapPop(&hp);
			HeapPush(&hp, a[i]);
		}
	}

	for (i = 0; i < k; i++)
	{
		printf("%d ", HeapTop(&hp));
		HeapPop(&hp);
	}
	printf("\n");
}
void TestTopk()//��С��
{
	HPDataType a[] = { 15,30,45,23,48,69,35,57 };
	PrintTopK(a, sizeof(a) / sizeof(a[0]), 3);
}


int main()
{
	//test();
	TestTopk();
	return 0;
}