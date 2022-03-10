#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>

typedef int SQDataType;
//动态的顺序表
typedef struct SeqList
{
	SQDataType* a;
	int size;
	int capacity;
}SL;

//增删查改等接口函数
void SeqListInit(SL* ps);//初始化


void SeqListPushBack(SL* ps, SQDataType x);//尾插
void SeqListPushFront(SL* ps, SQDataType x);//头插
void SeqListPopBack(SL* ps);//尾删
void SeqListPopFront(SL* ps);//头删

void SeqListInsert(SL* ps,int pos, SQDataType x);//随机插入
void SeqListErase(SL* ps,int pos);//随机删除



