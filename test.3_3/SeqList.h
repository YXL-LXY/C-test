#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>

#define N 10
typedef int SQDataType;

typedef struct SeqList
{
	SQDataType a[N];
	int size;
}SL;

//��ɾ��ĵȽӿں���
void SeqListInit(SL* ps);//��ʼ��


void SeqListPushBack(SL* ps, SQDataType x);//β��
void SeqListPushFront(SL* ps, SQDataType x);//ͷ��
void SeqListPopBack(SL* ps);//βɾ
void SeqListPopFront(SL* ps);//ͷɾ




