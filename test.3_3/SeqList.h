#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>

typedef int SQDataType;
//��̬��˳���
typedef struct SeqList
{
	SQDataType* a;
	int size;
	int capacity;
}SL;

//��ɾ��ĵȽӿں���
void SeqListInit(SL* ps);//��ʼ��


void SeqListPushBack(SL* ps, SQDataType x);//β��
void SeqListPushFront(SL* ps, SQDataType x);//ͷ��
void SeqListPopBack(SL* ps);//βɾ
void SeqListPopFront(SL* ps);//ͷɾ

void SeqListInsert(SL* ps,int pos, SQDataType x);//�������
void SeqListErase(SL* ps,int pos);//���ɾ��



