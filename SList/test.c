#define _CRT_SECURE_NO_WARNINGS 1

#include"SList.h"

void TestSList1()
{
	SListNode* plist = NULL;
	SListPushBack(&plist, 0);
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPrint(plist);
	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPrint(plist);

	SListDestroy(&plist);
}

void TestSList2()
{
	SListNode* plist = NULL;
	SListPushFront(&plist, 0);
	SListPushFront(&plist, 1);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 3);
	SListPushFront(&plist, 4);
	SListPrint(plist);
	SListPopFront(&plist);
	SListPrint(plist);
	SListPopFront(&plist);
	SListPrint(plist);

	SListDestroy(&plist);

}

void TestSList3()
{
	SListNode* plist = NULL;
	SListPushBack(&plist, 0);
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPrint(plist);
	
	SListNode* pos = SListFind(plist, 4);
	if (pos != NULL)
	{
		SListInsertAfter(pos, 666);
		SListPrint(plist);
	}
	

	SListDestroy(&plist);
}

int main()
{
	//TestSList1();
	//TestSList2();
	TestSList3();
	return 0;
}