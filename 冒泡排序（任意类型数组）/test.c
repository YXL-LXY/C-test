
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Swap(char* buf1,char* buf2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void* base, int sz,int width,int (*cmp)(const void* e1,const void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//两个元素比较
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//交换
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}
//第一个形参 传 数组名
//第二个形参 传 数组的元素个数
//第三个形参 传 元素的大小--多少字节
//第四个形参 传 比较数组元素的函数

int cmp_float(const void* e1, const void* e2)
{
	if ((*(float*)e1 - *(float*)e2) > 0)
		return 1;
	else if ((*(float*)e1 == *(float*)e2))
		return 0;
	else
		return -1;
}

void test1()
{
	float arr[10] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0,0.0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_float);
}



int main()
{
	test1();
	return 0;
}