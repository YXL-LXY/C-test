#include"SeqList.h"

//void TestSeqList1()
//{
//	SL s1;
//	SeqListInit(&s1);
//	SeqListPushFront(&s1, 1);
//	SeqListPushBack(&s1, 2);
//	SeqListPushBack(&s1, 3);
//	SeqListPushBack(&s1, 4);
//	SeqListPushBack(&s1, 5);
//	SeqListPushFront(&s1, 6);
//	SeqListPushBack(&s1, 7);
//	SeqListPushBack(&s1, 8);
//	SeqListPopBack(&s1);
//	SeqListPrint(&s1);
//	SeqListPopFront(&s1);
//	SeqListPrint(&s1);
//	SeqListInsert(&s1, 1, 20);
//	SeqListPrint(&s1);
//	SeqListErase(&s1, 2);
//	SeqListPrint(&s1);
//	SeqListDestory(&s1);
//}


void menu()
{
	printf("****************************************\n");
	printf("*** 1.尾插数据           2.头插数据  ***\n");
	printf("*** 3.尾删数据           4.头删数据  ***\n");
	printf("*** 5.打印数据           6.随机插    ***\n");
	printf("*** 7.随机删             8.查找数据  ***\n");
	printf("*** 9.修改数据           -1.退出     ***\n");
	printf("****************************************\n");
	printf("请输入操作选项：\n");
}

int main()
{
	SL s;
	SeqListInit(&s);
	int option = 0;
	int x = 0;
	int pos = 0;
	while (option != -1)
	{
		menu();
		scanf("%d", &option);
		switch (option)
		{
		case 1: 
			printf("请输入要插入的数据，以-1结束\n");
			do {
				scanf("%d", &x);
				if (x != -1)
				{
					SeqListPushBack(&s, x);
				}
			} while (x != -1);
			break;
		case 2:
			printf("请输入要插入的数据，以-1结束\n");
			do {
				scanf("%d", &x);
				if (x != -1)
				{
					SeqListPushFront(&s, x);
				}
			} while (x != -1);
			break;
		case 3:
			printf("请输入尾删数据的个数\n");
			scanf("%d", &x);
			while (x--)
			{
				SeqListPopBack(&s);
			}
			break;
		case 4:
			printf("请输入头删数据的个数\n");
			scanf("%d", &x);
			while (x--)
			{
				SeqListPopFront(&s);
			}
			break;
		case 5:
			SeqListPrint(&s);
			break;
		case 6:
			printf("请输入要插入的位置  和插入的数据\n");
			scanf("%d %d",&pos,&x);
			SeqListInsert(&s, pos, x);
			break;
		case 7:
			printf("请输入要删除的位置\n");
			scanf("%d", &pos);
			SeqListErase(&s, pos);
			break;
		case 8:
			printf("请输入要查找的数据\n");
			scanf("%d",&x);
			int ret = SeqListFind(&s, x);
			printf("要查找数据的下标是%d\n",ret);
			break;
		case 9:
			printf("请输入要修改数据的位置  和修改后的数据\n");
			scanf("%d %d",&pos,&x);
			SeqListModity(&s, pos, x);
			break;
		case -1:
			printf("退出程序\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	}

	//TestSeqList1();
	SeqListDestory(&s);
	return 0;
}