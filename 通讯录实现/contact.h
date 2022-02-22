#define _CRT_SECURE_NO_WARNINGS 
//#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

struct PeoInfo
{
	int age;
	char name[MAX_NAME];
	char sex[MAX_SEX];
	char addr[MAX_ADDR];
	char tele[MAX_TELE];
};
//通讯录类型
struct Contact
{
	struct PeoInfo data[MAX];
	int size;//记录元素个数
};


//声明函数
void InitContact(struct Contact* ps);//初始化
void AddContact(struct Contact* ps);//添加
void ShowContact(const struct Contact* ps);//显示
void DelContact(struct Contact* ps);//删除
void SearchContact(const struct Contact* ps);//查找
void ModifyContact(struct Contact* ps);//修改
void SortContact(struct Contact* ps);//排序