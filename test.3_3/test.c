#include"SeqList.h"

void TestSeqList1()
{
	SL s1;
	SeqListInit(&s1);
	SeqListPushFront(&s1, 1);
	SeqListPushBack(&s1, 2);
	SeqListPushBack(&s1, 3);
	SeqListPushBack(&s1, 4);
	SeqListPushBack(&s1, 5);
	SeqListPushFront(&s1, 6);
	SeqListPushBack(&s1, 7);
	SeqListPushBack(&s1, 8);
	SeqListPopBack(&s1);
	SeqListPrint(&s1);
	SeqListPopFront(&s1);
	SeqListPrint(&s1);
	SeqListInsert(&s1, 1, 20);
	SeqListPrint(&s1);
	SeqListErase(&s1, 2);
	SeqListPrint(&s1);

}

int main()
{
	TestSeqList1();

	return 0;
}