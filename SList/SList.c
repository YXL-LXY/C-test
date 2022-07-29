#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"

SListNode* BuySListNode(SLTDateType x)
{
	SListNode* newnode = (SListNode*)malloc(sizeof(SListNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}
	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}

void SListPrint(SListNode* plist)
{
	SListNode* p = plist;
	while (p != NULL)
	{
		printf("%d->",p->data);
		p = p->next;
	}
	printf("NULL\n");
}

void SListPushBack(SListNode** pplist, SLTDateType x)
{
	SListNode* newnode = BuySListNode(x);
	if (*pplist == NULL)
	{
		*pplist = newnode;
	}
	else
	{
		SListNode* tail = *pplist;
		while (tail->next != NULL)//tail到最后一个节点
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}

void SListPushFront(SListNode** pplist, SLTDateType x)
{
	SListNode* newnode = BuySListNode(x);
	newnode->next = *pplist;
	*pplist = newnode;
}


void SListPopBack(SListNode** pplist)
{
	assert(*pplist);//断言链表不为空

	if ((*pplist)->next == NULL)//链表只有一个节点
	{
		free(*pplist);
		*pplist = NULL;
	}
	//链表有两个及以上的节点
	SListNode* prev = NULL;//tail的前一个节点
	SListNode* tail = *pplist;
	while (tail->next != NULL)
	{
		prev = tail;
		tail = tail->next;
	}
	free(tail);
	prev->next = NULL;
}

void SListPopFront(SListNode** pplist)
{
	assert(*pplist);//断言链表不为空
	SListNode* tmp = (*pplist)->next;
	free(*pplist);
	*pplist = tmp;
}

SListNode* SListFind(SListNode* plist, SLTDateType x)
{
	SListNode* cur = plist;
	while (cur != NULL)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}

void SListInsert(SListNode** pplist,SListNode* pos, SLTDateType x)
{
	if (pos == *pplist)
	{
		SListPushFront(pplist, x);
	}
	else
	{
		SListNode* prev = *pplist;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		SListNode* newnode = BuySListNode(x);
		prev->next = newnode;
		newnode->next = pos;
	}
	
}



void SListInsertAfter(SListNode* pos, SLTDateType x)
{
	assert(pos);

	SListNode* newnode = BuySListNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}

void SListErase(SListNode** pplist,SListNode* pos)
{
	assert(pos);
	if (pos == *pplist)
	{
		SListPopFront(*pplist);
	}
	else
	{
		SListNode* prev = *pplist;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = pos->next;
		free(pos);
	}
}



void SListEraseAfter(SListNode* pos)
{
	assert(pos->next);

	SListNode* tmp = pos->next->next;
	free(pos->next);
	pos->next = tmp;
}

void SListDestroy(SListNode** pplist)
{
	SListNode* p = *pplist;
	while (p)
	{
		SListNode* next = p->next;
		free(p);
		p = next;
	}
	*pplist = NULL;
}