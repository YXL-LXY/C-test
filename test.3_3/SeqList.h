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

//增删查改等接口函数
void SeqListInit(SL* ps);//初始化


void SeqListPushBack(SL* ps, SQDataType x);//尾插
void SeqListPushFront(SL* ps, SQDataType x);//头插
void SeqListPopBack(SL* ps);//尾删
void SeqListPopFront(SL* ps);//头删




