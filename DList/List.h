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

//初始化带头双向循环链表
LTNode* ListInit();
//打印双链表
void ListPrint(LTNode* phead);
//创建节点
LTNode* BuyLTNode(LTDataType x);
//尾插
void ListPushBack(LTNode* phead, LTDataType x);
//尾删
void ListPopBack(LTNode* phead);
//头插
void ListPushFront(LTNode* phead, LTDataType x);
//头删
void ListPopFront(LTNode* phead);
//查找
LTNode* ListFind(LTNode* phead, LTDataType x);
//pos前插入
void ListInsert(LTNode* pos, LTDataType x);
//删除pos节点
void ListErase(LTNode* pos);
//销毁链表
void Destroy(LTNode* phead);
