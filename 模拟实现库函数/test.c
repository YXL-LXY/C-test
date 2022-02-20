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
//int My_strlen1(const char* x)
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
//int My_strlen2(const char* x)
//{
//	if (*x)
//		return 0;
//	else
//		return 1 + My_strlen2(x + 1);
//}


//3 指针减指针
//int My_strlen3(const char* x)
//{
//	char* q = x;
//	while (*x)
//	{
//		x++;
//	}
//	return x - q;
//}
//
//
//int main()
//{
//	char arr[] = "HELLO WORLD!";
//	int ret = My_strlen3(arr);
//	printf("%d \n", ret);
//	return 0;
//}




//strcmp

//int My_strcmp(const char* str1,const char* str2)
//{
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//
//	return (*str1 - *str2);
//}
//
//int main()
//{
//	char* p1 = "abcdefg";
//	char* p2 = "qwert";
//	int ret = My_strcmp(p1, p2);
//	printf("%d \n",ret);
//	return 0;
//
//}


//char* My_strstr(const char* p1, const char* p2)
//{
//	assert(p1);
//	assert(p2);
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cur = (char*)p1;
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while ((*s1 == *s2) && (*s1) && (*s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;
//		}
//		cur++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	const char* p1 = "abbbcdef";
//	const char* p2 = "bbc";
//	char* ret = My_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("字串不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//
//void* My_memcpy(void* dest,const void* src,size_t num)
//{
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//
//struct S
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[10] = { 0 };
//	My_memcpy(arr2,arr1,sizeof(arr1));
//	struct S arr3[] = { {"张三",20},{"李四",30}};
//	struct S arr4[3] = { 0 };
//	My_memcpy(arr4, arr3, sizeof(arr3));
//	return 0;
//}





void* My_memmove(void* dest,const void*src,size_t num)
{
	void* ret = dest;
	if (dest < src)//前->后
	{
		while (num--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
	}
	else//后->前
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return ret;
}

int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	My_memmove(arr1 + 2, arr1, 20);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}