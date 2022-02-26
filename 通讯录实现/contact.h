#define _CRT_SECURE_NO_WARNINGS 
//#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
#define DEFAULT_SZ 3

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

typedef struct PeoInfo
{
	int age;
	char name[MAX_NAME];
	char sex[MAX_SEX];
	char addr[MAX_ADDR];
	char tele[MAX_TELE];
}PeoInfo;
//ͨѶ¼����
typedef struct Contact
{
	PeoInfo* data;
	int size;//��¼��ǰ���е�Ԫ�ظ���
	int capacity;
}Contact;


//��������
void InitContact(struct Contact* ps);//��ʼ��
void AddContact(struct Contact* ps);//���
void ShowContact(const struct Contact* ps);//��ʾ
void DelContact(struct Contact* ps);//ɾ��
void SearchContact(const struct Contact* ps);//����
void ModifyContact(struct Contact* ps);//�޸�
void SortContact(struct Contact* ps);//����
void DestroyContact(struct Contact* ps);