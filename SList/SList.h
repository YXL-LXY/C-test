#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdlib.h>
#include<stdio.h>
#include<assert.h>
typedef int SLTDateType;
typedef struct SListNode
{
	SLTDateType data;
	struct SListNode* next;
}SListNode;

// ��̬����һ���ڵ�
SListNode* BuySListNode(SLTDateType x);
// �������ӡ
void SListPrint(SListNode* plist);
// ������β��
void SListPushBack(SListNode** pplist, SLTDateType x);
// �������ͷ��
void SListPushFront(SListNode** pplist, SLTDateType x);
// �������βɾ
void SListPopBack(SListNode** pplist);
// ������ͷɾ
void SListPopFront(SListNode** pplist);
// ���������
SListNode* SListFind(SListNode* plist, SLTDateType x);
// ��������posλ��֮�����x
// ����˼��Ϊʲô����posλ��֮ǰ���룿
// ������pos��ǰһ���ڵ㣬Ч�ʲ���
void SListInsert(SListNode** pplist,SListNode* pos, SLTDateType x);


void SListInsertAfter(SListNode* pos, SLTDateType x);
// ������ɾ��posλ��֮���ֵ
// ����˼��Ϊʲô��ɾ��posλ�ã�
// ������pos��ǰһ���ڵ㣬Ч�ʲ���
void SListErase(SListNode** pplist,SListNode* pos);


void SListEraseAfter(SListNode* pos); 
// �����������
void SListDestroy(SListNode** pplist);