#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

//int main()
//{
//	//���ڴ�������10�����οռ�,����ʼ��
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//����̬����Ŀռ䲻��ʹ��ʱ���黹�ռ�
//	free(p);
//	p = NULL;
//	return 0;
//}




//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));//����ռ䲢��ʼ��Ϊ0
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}



//reallocʹ�õ�ע�����
// 1.���pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
// 2.���pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ���realloc������������һ���µ�
// �ڴ����򿪱�һ����������Ŀռ䣬���Ұ�ԭ���ڴ��е����ݿ����������ͷžɵ��ڴ�
// �ռ䣬��󷵻��¿��ٵ��ڴ�ռ��ַ
// 3.�������ʧ�ܣ����ؿ�ָ�롣���Ե����µı���������realloc�����ķ���ֵ


int main()
{
	int* p = (int*)malloc(5 * sizeof(int));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 5; i++)
		{
			*(p + i) = i;
		}
		//�ռ䲻����ʹ��realloc
		int* ptr = (int*)realloc(p, 10 * sizeof(int));
		if (ptr != NULL)
		{
			p = ptr;
			ptr = NULL;
			for (i = 5; i < 10; i++)
			{
				*(p + i) = i;
			}

			for (i = 0; i < 10; i++)
			{
				printf("%d ", *(p + i));
			}
		}
		else
		{
			printf("%s\n", strerror(errno));
		}
	}
	free(p);
	p = NULL;
	return 0;
}