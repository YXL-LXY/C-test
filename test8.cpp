#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//定义结构体变量，用它表示考生的学号、姓名（用英文表示）以及语文、数学、外语成绩。输入两个考生的信息和各门课成绩并比较
//（按总分进行高低排序；当总分相同时，依次按语、数、外的顺序排序）。

//struct Goal
//{
//	float math;
//	float chinese;
//	float english;
//};
//
//struct Student
//{
//	char name[20];
//	char idnum[20];
//	struct Goal goal;
//	float total;
//}student[2];
//
//int compare(float x, float y)
//{
//	if (x > y)
//		return 1;
//	if (x = y)
//		return 0;
//	if (x < y)
//		return -1;
//}
//int main()
//{
//	int i;
//	printf("请输入第一个考生的学号，姓名及语数外成绩：\n");
//	scanf("%s  \t %s\t %f  %f  %f",&student[0].idnum,&student[0].name,&student[0].goal.chinese, &student[0].goal.math, &student[0].goal.english);
//	printf("请输入第二个考生的学号，姓名及语数外成绩：\n");
//	scanf("%s  \t %s\t %f  %f  %f", &student[1].idnum,&student[1].name,&student[1].goal.chinese, &student[1].goal.math, &student[1].goal.english);
//	printf("--------------------------------------------------------------------------------------------------------------------\n");
//	for (i = 0; i < 2; i++)
//	{
//		student[i].total = student[i].goal.chinese + student[i].goal.math + student[i].goal.english;
//	}
//	switch (compare(student[0].total, student[1].total))
//	{
//	case 1:printf("%s  \t %s\t %f  %f  %f\n", student[0].idnum, student[0].name, student[0].goal.chinese, student[0].goal.math, student[0].goal.english);
//		printf("%s  \t %s\t %f  %f  %f\n", student[1].idnum, student[1].name, student[1].goal.chinese, student[1].goal.math, student[1].goal.english);
//		break;
//	case 0:if (student[0].goal.chinese > student[1].goal.chinese)
//	{
//		printf("%s  \t %s\t %f  %f  %f\n", student[0].idnum, student[0].name, student[0].goal.chinese, student[0].goal.math, student[0].goal.english);
//		printf("%s  \t %s\t %f  %f  %f\n", student[1].idnum, student[1].name, student[1].goal.chinese, student[1].goal.math, student[1].goal.english);
//	}
//		  else if (student[0].goal.chinese == student[1].goal.chinese && student[0].goal.math > student[1].goal.math)
//	{
//		printf("%s  \t %s\t %f  %f  %f\n", student[0].idnum, student[0].name, student[0].goal.chinese, student[0].goal.math, student[0].goal.english);
//		printf("%s  \t %s\t %f  %f  %f\n", student[1].idnum, student[1].name, student[1].goal.chinese, student[1].goal.math, student[1].goal.english);
//	}
//		  else if (student[0].goal.chinese == student[1].goal.chinese && student[0].goal.math == student[1].goal.math && student[0].goal.english > student[1].goal.english)
//	{
//		printf("%s  \t %s\t %f  %f  %f\n", student[0].idnum, student[0].name, student[0].goal.chinese, student[0].goal.math, student[0].goal.english);
//		printf("%s  \t %s\t %f  %f  %f\n", student[1].idnum, student[1].name, student[1].goal.chinese, student[1].goal.math, student[1].goal.english);
//	}break;
//	case -1:printf("%s  \t %s\t %f  %f  %f\n", student[1].idnum, student[1].name, student[1].goal.chinese, student[1].goal.math, student[1].goal.english);
//		printf("%s  \t %s\t %f  %f  %f\n", student[0].idnum, student[0].name, student[0].goal.chinese, student[0].goal.math, student[0].goal.english);
//		break;
//	}
//	return 0;
//}
//











//struct student {
//	char name[20];
//	char idnum[20];
//	float score[3];
//	double total;
//}student[2];
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
//
//
//int main()
//{
//	struct student* s;
//	for (s = student; s < student + 2; s++)
//	{
//		printf("输入第%d个学生的信息：\n",s-student+1);
//		printf("姓名：");
//		scanf("%s", s->name);
//		printf("学号：");
//		scanf("%s",&s->idnum);
//		printf("语文 数学 英语：\n");
//		scanf("%f%f%f",&(s->score[0]),&(s->score[1]),&(s->score[2]));
//	}
//	printf("\n学生信息\n姓名\t学号\t\t语文\t数学\t英语\n");
//	for (s = student; s < student + 2; s++)
//		printf("%s\t%s\t%.1f\t%.1f\t%.1f\n",s->name,s->idnum,s->score[0],s->score[1],s->score[2]);
//
//	s = highscore(student, 2);
//	printf("\n总分最高的学生是：%s,学号：%s\n成绩：语文：%.1f数学：%.1f英语：%.1f总分：%.1f\n",s->name,s->idnum,s->score[0],s->score[1],s->score[2],s->total);
//	return 0;
//}









//
//设有一个教师与学生通用的表格，数据项包括：姓名、年龄、职业和单位，其中“职业”一项可分为“教师”和“学生”两类；对“单位”一项，
//教师填入“系部名称”（用字符类型表示），学生填入“班级编号”（用整型量表示）。编程输入人员数据，再以表格输出。
//
//struct
//{
//	char name[10];
//	int age;
//	char job;
//	union 
//	{
//		int class_;
//		char office[10];
//	}depa;
//}body[2];
//
//
//
//int main()
//{
//	int n, i;
//	for (i = 0; i < 2; i++)
//	{
//		printf("input name,age,job(s代表学生，t代表教师) and department(班级名称或系部名称)\n");
//		scanf("%s %d %c",body[i].name,&body[i].age,&body[i].job);
//		if (body[i].job == 's')
//			scanf("%d",&body[i].depa.class_);
//		else
//			scanf("%s", body[i].depa.office);
//	}
//	printf("------------------------------------------------------------------------------------------------------------\n");
//	printf("name\t age  job  class  office\n");
//	for (i = 0; i < 2; i++)
//	{
//		if (body[i].job == 's')
//			printf("%s\t %d    %c   %d\n",body[i].name,body[i].age,body[i].job,body[i].depa.class_);
//		else
//			printf("%s\t %d    %c\t   %s\n", body[i].name, body[i].age, body[i].job, body[i].depa.office);
//	}
//
//	return 0;
//}