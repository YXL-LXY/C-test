#include"SeqList.h"

void SeqListInit(SL* ps)
{
	memset(ps->a, 0, sizeof(SQDataType) * N);
	ps->size = 0;
}

//��ɾ��ĵȽӿں���
void SeqListPushBack(SL* ps, SQDataType x)//β��
{
	if (ps->size >= N)
	{
		printf("SeqList is Full\n");
		return;
	}
	ps->a[ps->size] = x;
	ps->size++;
}


void SeqListPushFront(SL* ps, SQDataType x)//ͷ��
{

}


void SeqListPopBack(SL* ps)//βɾ
{

}


void SeqListPopFront(SL* ps)//ͷɾ
{

}