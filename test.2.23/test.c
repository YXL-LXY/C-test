#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

//int main()
//{
//	//向内存中申请10个整形空间,不初始化
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
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
//	//当动态申请的空间不在使用时，归还空间
//	free(p);
//	p = NULL;
//	return 0;
//}




//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));//申请空间并初始化为0
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



//realloc使用的注意事项：
// 1.如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
// 2.如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一个新的
// 内存区域开辟一块满足需求的空间，并且把原来内存中的数据拷贝回来，释放旧的内存
// 空间，最后返回新开辟的内存空间地址
// 3.如果开辟失败，返回空指针。所以得用新的变量来接受realloc函数的返回值


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
		//空间不够，使用realloc
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