#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<assert.h>
//void reverse(char* str)
//{
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[256] = { 0 };
//	gets(arr);
//	reverse(arr);//������
//	printf("%s",arr);
//	return 0;
//}



//��0-100000������������ӡ����
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		//ȷ��i�Ǽ�λ��
//		int n = 1;
//		int ret = i;
//		while (ret /= 10)
//		{
//			n++;
//		}
//		ret = i;
//		int sum = 0;
//		while (ret)
//		{
//			sum += pow(ret % 10, n);
//			ret /= 10;
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}




//5λ�˶�Ա�μ�10��̨��ˮ����������������Ԥ����������
//
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ���������Ρ�

//��ٷ�
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							if(a*b*c*d*e == 120)
//							printf("a=%d,b=%d,c=%d,d=%d,e=%d\n",a,b,c,d,e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}




//��ת�ַ���

//������ת��
//
//void reverse(char* left,char* right)
//{
//	assert(left);
//	assert(right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k <= len);
//	reverse(arr,arr+k-1);//�������
//	reverse(arr+k,arr+len-1);//�����ұ�
//	reverse(arr,arr+len-1);//��������
//
//}
//
//int main()
//{
//	int n = 0;
//	char arr[] = "abcdef";
//	printf("�����뷴ת�ַ�������");
//	scanf("%d",&n);
//	left_move(arr, n);
//	printf("%s\n", arr);
//	return 0;
//}





//���Ͼ���
//
// ��һ�����־��󣬾����ÿ�д����ҵ��������ϵ��µ��������д�����������ľ����в���ĳ�������Ƿ����
// 
// Ҫ��ʱ�临�Ӷ�С��O(N);
//

//int FindNum(int arr[3][3], int k,int *px,int *py)//�ȽϾ������Ͻ����ݺ�Ҫ�����ݵĴ�С��ȥ��һ�л�һ��
//{
//	int a = 0;
//	int b = *py - 1;
//	while (a <= *px - 1 && b >= 0)
//	{
//		if (arr[a][b] > k)
//		{
//			b--;//ȥ�����ұ�һ��
//		}
//		else if (arr[a][b] < k)
//		{
//			a++;//ȥ����һ��
//		}
//		else
//		{
//			*px = a;
//			*py = b;
//			return 1;
//		}
//	}
//	//�Ҳ���
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	int x = 3;
//	int y = 3;
//	int ret = FindNum(arr, k, &x, &y);
//	if (ret == 1)
//	{
//		printf("�ҵ���\n");
//		printf("�±��ǣ�%d %d",x,y);
//	}
//	else
//	{
//		printf("�Ҳ���");
//	}
//	return 0;
//}




