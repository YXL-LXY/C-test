#include"SeqList.h"

void SeqListInit(SL* ps)
{
	memset(ps->a, 0, sizeof(SQDataType) * N);
	ps->size = 0;
}

//增删查改等接口函数
void SeqListPushBack(SL* ps, SQDataType x)//尾插
{
	if (ps->size >= N)
	{
		printf("SeqList is Full\n");
		return;
	}
	ps->a[ps->size] = x;
	ps->size++;
}


void SeqListPushFront(SL* ps, SQDataType x)//头插
{

}


void SeqListPopBack(SL* ps)//尾删
{

}


void SeqListPopFront(SL* ps)//头删
{

}