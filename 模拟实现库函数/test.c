
#include<stdio.h>
#include<string.h>
#include<assert.h>

//strcpy

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//����srcָ����ַ�����destָ��Ŀռ䣬����'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//����Ŀ�Ŀռ����ʼ��ַ
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "hello";
//	my_strcpy(arr1, arr2);
//	printf("%s\n",arr1);
//	return 0;
//}



//strcat


char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;
	//�ҵ�Ŀ���ַ�����\0
	while (*dest != '\0')
	{
		dest++;
	}
	//׷��
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[20] = "hello";
	char arr2[] = "world";
	my_strcat(arr1, arr2);
	printf("%s\n",arr1);
	return 0;
}