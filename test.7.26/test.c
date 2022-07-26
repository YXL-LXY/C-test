#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct stu
{
	char nums[20];
	char name[20];
	int age;
	float score;
}stu;

int cmp_by_nums(const void* e1,const void* e2)
{
	int ret = strcmp(((stu*)e1)->nums,((stu*)e2)->nums);
	return ret;
}

int cmp_by_age(const void* e1, const void* e2)
{
	return ((stu*)e1)->age - ((stu*)e2)->age;
}


int cmp_by_score(const void* e1,const void* e2)
{
	if (((stu*)e1)->score > ((stu*)e2)->score)
		return 1;
	else if (((stu*)e1)->score < ((stu*)e2)->score)
		return -1;
	else
		return 0;
}

int main()
{
	stu s1 = { "202104416019","zhangsan",20,80.5 };
	stu s2 = { "202104416015","lisi",18,85 };
	stu s3 = { "202104416020","wangwu",25,90.5 };
	stu arr[] = { s1,s2,s3 };
	qsort(arr,sizeof(arr)/sizeof(arr[0]),sizeof(arr[0]),cmp_by_nums);
	return 0;
}
