#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


typedef int LTDataType;
typedef struct ListNode
{
	LTDataType data;
	struct ListNode* prev;
	struct ListNode* next;
}LTNode;

//��ʼ����ͷ˫��ѭ������
LTNode* ListInit();
//��ӡ˫����
void ListPrint(LTNode* phead);
//�����ڵ�
LTNode* BuyLTNode(LTDataType x);
//β��
void ListPushBack(LTNode* phead, LTDataType x);
//βɾ
void ListPopBack(LTNode* phead);
//ͷ��
void ListPushFront(LTNode* phead, LTDataType x);
//ͷɾ
void ListPopFront(LTNode* phead);
//����
LTNode* ListFind(LTNode* phead, LTDataType x);
//posǰ����
void ListInsert(LTNode* pos, LTDataType x);
//ɾ��pos�ڵ�
void ListErase(LTNode* pos);
//��������
void Destroy(LTNode* phead);
