#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//��ʲ����
//������������һ����Ϸ����������һ��ʯͷ��ÿ�����Ƕ�������ó�1��3��ʯͷ���������һ��ʯͷ����Ӯ����Ϸ����Ϸ��ʼʱ���������֡�
//���������˶��������ԣ������������ž��ߡ�����ʯͷ���������ж����Ƿ��Ӯ��

//���������ĸ�ʯͷ����ô����䡣�������ü��������һ�����ᱻ���������ߡ�
//���룺n=4
//�����False

//���룺n=5
//�����True
// ������һ������ʤ��
//
//int Win(int n)
//{
//	return (n % 4 != 0);
//}
//
//
//int main()
//{
//	int n = 0;
//	printf("������ʯͷ��������\n");
//	scanf("%d", &n);
//	int x = Win(n);
//	if (x == 0)
//	{
//		printf("False");
//	}
//	else
//	{
//		printf("True");
//	}
//	return 0;
//}






//��������
//��������һ����Ȼ��N�����N��ż�����Ͱ������N/2�����N���������Ͱ������3*N+1.
//�����������������ȥ�����ձ�Ȼ��1.

//nͨ�����ֱ任������1
//int Getanswer(int n)
//{
//	int count = 0;
//	while (n > 1)
//	{
//		if (n % 2 == 0)
//		{
//			n /= 2;
//			count++;
//		}
//		else
//		{
//			n = 3 * n + 1;
//			count++;
//		}
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	printf("������һ����Ȼ����\n");
//	scanf("%d",&n);
//	int num = Getanswer(n);
//	printf("%d",num);
//	return 0;
//}






//���׽׳�
//���磺5���� = 5*3*1 = 15
//6���� = 6*4*2 = 48

//int DoubleFactorial(int n)
//{
//	long sum = n;
//	for (int i = 1; i < n; i++)
//	{
//		if (n % 2 == 0 && i % 2 == 0)
//		{
//			sum *= i;
//		}
//		else if(n % 2 == 1 && i % 2 == 1)
//		{
//			sum *= i;
//		}
//	}
//	return sum;
//}
//
//int main()
//{
//	int n = 0;
//	printf("���������ݣ�\n");
//	scanf("%d",&n);
//	int ret = DoubleFactorial(n);
//	printf("%d",ret);
//	return 0;
//}





//����ĸ��д
//����һ��Ӣ�ľ��ӣ���ÿ�����ʵĵ�һ����ĸ�ĳɴ�д��ĸ

//int main()
//{
//	int i = 0;
//	char a[100];
//	printf("������һ��Ӣ�ľ���\n");
//	gets_s(a);
//	for (i = 0; a[i] != '\0'; i++)
//	{
//		if (a[0] <= 'z' && a[0] >= 'a')
//		{
//			a[0] -= 32;
//		}
//		else if (a[i - 1] == ' ' && a[i] >= 'a' && a[i] <= 'z')
//		{
//			a[i] -= 32;
//		}
//	}
//	puts(a);
//}