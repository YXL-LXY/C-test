#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
//struct student {
//	char name[20];
//	char idnum[20];
//	float score[3];
//	double total;
//};
//struct student* highscore(struct student* s, int n)
//{
//	int i;
//	struct student* high = s;
//	for (i = 0; i < n; i++)
//	{
//		(s + i)->total = (s + i)->score[0] + (s + i)->score[1] + (s + i)->score[2];
//		if (high->total < (s + i)->total)
//			high = s + i;
//		if (high->total == (s + i)->total)
//		{
//			if (high->score[0] < (s + i)->score[0])
//				high = s + i;
//		}
//		if (high->total == (s + i)->total && high->score[0] == (s + i)->score[0])
//		{
//			if (high->score[1] < (s + i)->score[1])
//				high = s + i;
//		}
//		if (high->total == (s + i)->total && high->score[0] == (s + i)->score[0] && high->score[1] == (s+i)->score[1])
//		{
//			if (high->score[2] < (s + i)->score[2])
//				high = s + i;
//		}
//	}
//	return high;
//}


//int main()
//{
//	struct student* s;
//	struct student student[2];
//	for (s = student; s < student + 2; s++)
//	{
//		printf("�����%d��ѧ������Ϣ��\n",s-student+1);
//		printf("������");
//		scanf("%s", s->name);
//		printf("ѧ�ţ�");
//		scanf("%s",&s->idnum);
//		printf("���� ��ѧ Ӣ�\n");
//		scanf("%f%f%f",&(s->score[0]),&(s->score[1]),&(s->score[2]));
//	}
//	printf("\nѧ����Ϣ\n����\tѧ��\t\t����\t��ѧ\tӢ��\n");
//	for (s = student; s < student + 2; s++)
//		printf("%s\t%s\t%.1f\t%.1f\t%.1f\n",s->name,s->idnum,s->score[0],s->score[1],s->score[2]);
//
//	s = highscore(student, 2);
//	printf("\n�ܷ���ߵ�ѧ���ǣ�%s,ѧ�ţ�%s\n�ɼ������ģ�%.1f��ѧ��%.1fӢ�%.1f�ܷ֣�%.1f\n",s->name,s->idnum,s->score[0],s->score[1],s->score[2],s->total);
//	return 0;
//}
//








//
//����һ����ʦ��ѧ��ͨ�õı����������������������䡢ְҵ�͵�λ�����С�ְҵ��һ��ɷ�Ϊ����ʦ���͡�ѧ�������ࣻ�ԡ���λ��һ�
//��ʦ���롰ϵ�����ơ������ַ����ͱ�ʾ����ѧ�����롰�༶��š�������������ʾ�������������Ա���ݣ����Ա�������

struct
{
	char name[10];
	int age;
	char job;
	union 
	{
		int class_;
		char office[10];
	}depa;
}body[2];



int main()
{
	int n, i;
	for (i = 0; i < 2; i++)
	{
		printf("input name,age,job(s����ѧ����t�����ʦ) and department(�༶���ƻ�ϵ������)\n");
		scanf("%s %d %c",body[i].name,&body[i].age,&body[i].job);
		if (body[i].job == 's')
			scanf("%d",&body[i].depa.class_);
		else
			scanf("%s", body[i].depa.office);
	}
	printf("------------------------------------------------------------------------------------------------------------\n");
	printf("name\t age  job  class  office\n");
	for (i = 0; i < 2; i++)
	{
		if (body[i].job == 's')
			printf("%s\t %d    %c   %d\n",body[i].name,body[i].age,body[i].job,body[i].depa.class_);
		else
			printf("%s\t %d    %c\t   %s\n", body[i].name, body[i].age, body[i].job, body[i].depa.office);
	}

	return 0;
}