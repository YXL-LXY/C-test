#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//�򿪳ɹ�
//	//���ļ�
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//scanf�ӱ�׼����(����)��ȡ��ʽ��������
//fscanf��������������ȡ��ʽ��������
//sscanf���ַ����ж�ȡһ����ʽ��������
//


//struct S
//{
//	int n;
//	double d;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 0;
//	}
//	//���ļ�
//	fscanf(pf, "%d %lf", &(s.n), &(s.d));
//	printf("%d %lf\n", s.n, s.d);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//struct S
//{
//	int n;
//	double d;
//	char name[20];
//};
//
//int main()
//{
//	char arr[100] = { 0 };
//	struct S tmp = { 0 };
//	struct S s = { 100,3.14,"zhangsan" };
//	//�Ѹ�ʽ������ת�����ַ����ŵ�arr
//	sprintf(arr, "%d %lf %s", s.n, s.d, s.name);
//	printf("%s\n", arr);
//	//��arr����ȡ��ʽ������
//	sscanf(arr, "%d %lf %s", &(tmp.n), &(tmp.d), tmp.name);
//	printf("%d %lf %s\n", tmp.n, tmp.d, tmp.name);
//	return 0;
//}