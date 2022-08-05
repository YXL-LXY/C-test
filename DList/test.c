#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"

ListTest1()
{
	LTNode* list = NULL;
	list = ListInit();
	ListPushBack(list, 1);
	ListPushBack(list, 2);
	ListPushBack(list, 3);
	ListPushBack(list, 4);
	ListPushBack(list, 5);
	ListPrint(list);

	ListPushFront(list, 10);
	ListPushFront(list, 30);
	ListPushFront(list, 50);
	ListPushFront(list, 70);
	ListPrint(list);

}

int main()
{
	ListTest1();
	return 0;
}