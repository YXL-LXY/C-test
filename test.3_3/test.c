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
	printf("*** 1.β������           2.ͷ������  ***\n");
	printf("*** 3.βɾ����           4.ͷɾ����  ***\n");
	printf("*** 5.��ӡ����           6.�����    ***\n");
	printf("*** 7.���ɾ             8.��������  ***\n");
	printf("*** 9.�޸�����           -1.�˳�     ***\n");
	printf("****************************************\n");
	printf("���������ѡ�\n");
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
			printf("������Ҫ��������ݣ���-1����\n");
			do {
				scanf("%d", &x);
				if (x != -1)
				{
					SeqListPushBack(&s, x);
				}
			} while (x != -1);
			break;
		case 2:
			printf("������Ҫ��������ݣ���-1����\n");
			do {
				scanf("%d", &x);
				if (x != -1)
				{
					SeqListPushFront(&s, x);
				}
			} while (x != -1);
			break;
		case 3:
			printf("������βɾ���ݵĸ���\n");
			scanf("%d", &x);
			while (x--)
			{
				SeqListPopBack(&s);
			}
			break;
		case 4:
			printf("������ͷɾ���ݵĸ���\n");
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
			printf("������Ҫ�����λ��  �Ͳ��������\n");
			scanf("%d %d",&pos,&x);
			SeqListInsert(&s, pos, x);
			break;
		case 7:
			printf("������Ҫɾ����λ��\n");
			scanf("%d", &pos);
			SeqListErase(&s, pos);
			break;
		case 8:
			printf("������Ҫ���ҵ�����\n");
			scanf("%d",&x);
			int ret = SeqListFind(&s, x);
			printf("Ҫ�������ݵ��±���%d\n",ret);
			break;
		case 9:
			printf("������Ҫ�޸����ݵ�λ��  ���޸ĺ������\n");
			scanf("%d %d",&pos,&x);
			SeqListModity(&s, pos, x);
			break;
		case -1:
			printf("�˳�����\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	}

	//TestSeqList1();
	SeqListDestory(&s);
	return 0;
}