#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"

void HeapInit(Heap* hp)
{
	assert(hp);
	hp->a = NULL;
	hp->size = hp->capacity = 0;
}

void Swap(HPDataType* p1, HPDataType* p2)
{
	HPDataType tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

//���ϵ������ֶ���̬
void AdjustUp(HPDataType* a, int child)
{
	int parent = (child - 1) / 2;
	//while (parent >= 0)
	while (child > 0)
	{
		if (a[child] > a[parent])
		{
			Swap(&a[child], &a[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}
//���µ������ֶ���̬
void AdjustDown(HPDataType* a, int n, int parent)
{
	int minChild = parent * 2 + 1;
	while (minChild < n)
	{
		// �ҳ�С���Ǹ�����
		if (minChild + 1 < n && a[minChild + 1] > a[minChild])
		{
			minChild++;
		}

		if (a[minChild] > a[parent])
		{
			Swap(&a[minChild], &a[parent]);
			parent = minChild;
			minChild = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

// �ѵĹ���
void HeapCreate(Heap* hp, HPDataType* a, int n)
{
	assert(hp);
	hp->a = (HPDataType*)malloc(sizeof(HPDataType) * n);
	if (hp->a == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}
	memcpy(hp->a, a, n * sizeof(HPDataType));
	hp->size = hp->capacity = n;

	for (int root = (n - 2) / 2; root >= 0; root--)
	{
		AdjustDown(hp->a, n, root);
	}
}


void HeapPrint(Heap* hp)
{
	for (int i = 0; i < hp->size; ++i)
	{
		printf("%d ", hp->a[i]);
	}
	printf("\n");
}


// �ѵ�����
void HeapDestory(Heap* hp)
{
	assert(hp);
	free(hp->a);
	hp->capacity = hp->size = 0;
}
// �ѵĲ���
void HeapPush(Heap* hp, HPDataType x)
{
	assert(hp);
	if (hp->size == hp->capacity)
	{
		int newCapacity = hp->capacity == 0 ? 4 : hp->capacity * 2;
		HPDataType* tmp = (HPDataType*)realloc(hp->a, newCapacity * sizeof(HPDataType));
		if (tmp == NULL)
		{
			perror("realloc fail");
			exit(-1);
		}

		hp->a = tmp;
		hp->capacity = newCapacity;
	}

	hp->a[hp->size] = x;
	hp->size++;

	AdjustUp(hp->a, hp->size - 1);
}

// �ѵ�ɾ��
void HeapPop(Heap* hp)
{
	assert(hp);
	assert(!HeapEmpty(hp));
	Swap(&hp->a[0], &hp->a[hp->size - 1]);
	hp->size--;

	AdjustDown(hp->a, hp->size, 0);
}
// ȡ�Ѷ�������
HPDataType HeapTop(Heap* hp)
{
	assert(hp);
	assert(!HeapEmpty(hp));
	return hp->a[0];
}
// �ѵ����ݸ���
int HeapSize(Heap* hp)
{
	return hp->size;
}
// �ѵ��п�
int HeapEmpty(Heap* hp)
{
	return hp->size == 0;
}




