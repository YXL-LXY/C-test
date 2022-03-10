#include"SeqList.h"

void SeqListInit(SL* ps)
{
	ps->a = 0;
	ps->size = 0;
	ps->capacity = 0;//容量
}

void SeqListCheckCapacity(SL* ps)
{
	//满了就扩容
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SQDataType* tmp = (SQDataType*)realloc(ps->a, newcapacity * sizeof(SQDataType));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else
		{
			ps->a = tmp;
			ps->capacity = newcapacity;
		}
	}
}

//增删查改等接口函数
void SeqListPushBack(SL* ps, SQDataType x)//尾插
{
	SeqListCheckCapacity(ps);
	ps->a[ps->size] = x;
	ps->size++;
}


void SeqListPushFront(SL* ps, SQDataType x)//头插(把原来的数据从后往前挪）
{
	SeqListCheckCapacity(ps);

	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}

	ps->a[0] = x;
	ps->size++;
}


void SeqListPopBack(SL* ps)//尾删
{
	assert(ps->size > 0);
	ps->size--;
}


void SeqListPopFront(SL* ps)//头删(从前往后挪)
{
	assert(ps->size > 0);
	int start = 0;
	while (start < ps->size)
	{
		ps->a[start] = ps->a[start + 1];
		start++;
	}
	ps->size--;
}


void SeqListInsert(SL* ps, int pos, SQDataType x)//随机插入
{
	assert(pos < ps->size);
	SeqListCheckCapacity(ps);

	int end = ps->size - 1;
	while (end >= pos)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[pos] = x;
	ps->size++;
}


void SeqListErase(SL* ps, int pos)//随机删除
{
	assert(pos < ps->size);
	int start = pos;
	while (start < ps->size)
	{
		ps->a[start] = ps->a[start + 1];
		start++;
	}
	ps->size--;
}

void SeqListPrint(SL* ps)//打印
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}