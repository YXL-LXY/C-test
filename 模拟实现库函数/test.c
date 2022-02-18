#define _CRT_SECUURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//strcpy

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//拷贝src指向的字符串到dest指向的空间，包含'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//返回目的空间的起始地址
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


//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	//找到目的字符串的\0
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//追加
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n",arr1);
//	return 0;
//}








//实现strlen的三种方法
//1
//int My_strlen1(char* x)
//{
//	int count = 0;
//	while (*x)
//	{
//		count++;
//		x++;
//	}
//	return count;
//}
//



//2
//int My_strlen2(char* x)
//{
//	if (*x)
//		return 0;
//	else
//		return 1 + My_strlen2(x + 1);
//}


//3 指针减指针
int My_strlen3(char* x)
{
	char* q = x;
	while (*x)
	{
		x++;
	}
	return x - q;
}


int main()
{
	char arr[] = "HELLO WORLD!";
	int ret = My_strlen3(arr);
	printf("%d \n", ret);
	return 0;
}