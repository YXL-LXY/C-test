#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"

LTNode* ListInit()
{
	LTNode* phead = BuyLTNode(0);
	phead->next = phead;
	phead->prev = phead;
	return phead;
}

void ListPrint(LTNode* phead)
{
	assert(phead);

	LTNode* cur = phead->next;
	printf("phead<=>");
	while (cur != phead)
	{
		printf("%d<=>", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

LTNode* BuyLTNode(LTDataType x)
{
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	if (newnode == NULL)
	{
		perror("malloc fail\n");
		exit(-1);
	}
	newnode->data = x;
	newnode->next = NULL;
	newnode->prev = NULL;
	return newnode;
}


void ListPushBack(LTNode* phead, LTDataType x)
{
	ListInsert(phead, x);
}

void ListPopBack(LTNode* phead)
{
	ListErase(phead->prev);
}

void ListPushFront(LTNode* phead, LTDataType x)
{
	ListInsert(phead->next, x);
}

void ListPopFront(LTNode* phead)
{
	ListErase(phead->next);
}

LTNode* ListFind(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}

void ListInsert(LTNode* pos, LTDataType x)
{
	assert(pos);
	LTNode* newnode = BuyLTNode(x);
	LTNode* posprev = pos->prev;

	newnode->next = pos;
	pos->prev = newnode;
	newnode->prev = posprev;
	posprev->next = newnode;
}

void ListErase(LTNode* pos)
{
	assert(pos);
	LTNode* prev = pos->prev;
	LTNode* next = pos->next;
	free(pos);
	prev->next = next;
	next->prev = prev;
}

void Destroy(LTNode* phead)
{
	assert(phead);
	LTNode* cur = phead->next;
	LTNode* next = NULL;
	while (cur != phead)
	{
		next = cur->next;
		free(cur);
		cur = next;
	}
	free(phead);
}


