#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

void SeqListInit(SeqList* ps)
{
	assert(ps);

	ps->a = NULL;
	ps->size = ps->capacity = 0;
}

void SeqListDestroy(SeqList* ps)
{
	assert(ps);

	free(ps->a);
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}

void CheckCapacity(SeqList* ps)
{
	assert(ps);

	if (ps->size == ps->capacity)
	{
		int newcapacity;
		if (ps->capacity == 0)
			newcapacity = ps->capacity = 4;
		else
			newcapacity = 2 * ps->capacity;

		SLDateType* p = (SLDateType*)realloc(ps->a, newcapacity * sizeof(SLDateType));
		if (p == NULL)
		{
			perror("realloc fail");
			return;
		}
		ps->a = p;
		ps->capacity = newcapacity;
	}
}


void SeqListPrint(SeqList* ps)
{
	assert(ps);
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d ",ps->a[i]);
	}
	printf("\n");
}


void SeqListPushBack(SeqList* ps, SLDateType x)
{
	assert(ps);

	CheckCapacity(ps);

	ps->a[ps->size] = x;
	ps->size++;
}


void SeqListPopBack(SeqList* ps)
{
	assert(ps);
	assert(ps->size > 0);

	ps->size--;
}


void SeqListPushFront(SeqList* ps, SLDateType x)
{
	assert(ps);
	CheckCapacity(ps);

	int i = 0;
	for (i = ps->size - 1; i >= 0; i--)
	{
		ps->a[i + 1] = ps->a[i];
	}
	ps->a[0] = x;
	ps->size++;
}


void SeqListPopFront(SeqList* ps)
{
	assert(ps);
	assert(ps->size > 0);

	int i = 0;
	for (i = 1; i < ps->size; i++)
	{
		ps->a[i - 1] = ps->a[i];
	}
	ps->size--;
}


int SeqListFind(SeqList* ps, SLDateType x)
{
	assert(ps);

	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
		{
			return i;//�ҵ������±�
		}
	}
	return -1;//û�ҵ�
}


void SeqListInsert(SeqList* ps, size_t pos, SLDateType x)
{
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);

	CheckCapacity(ps);

	int i = 0;
	for (i = ps->size; i > pos; i--)//��pos������������������һλ
	{
		ps->a[i] = ps->a[i - 1];
	}
	ps->a[pos] = x;
	ps->size++;
}


void SeqListErase(SeqList* ps, size_t pos)
{
	assert(ps);
	assert(ps->size > 0);
	assert(pos >=0 && pos <ps->size);

	int i = 0;
	for (i = pos + 1; i < ps->size; i++)//��pos���������������ǰŲһλ
	{
		ps->a[i - 1] = ps->a[i];
	}
	ps->size--;
}