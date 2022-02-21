#define _CRT_SECUURE_NO_WARNINGS 1
#include<stdio.h>
//判断当前机器是大端还是小端
int check_sys()
{
	union Un
	{
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c;
}

int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}



//
//结构体
// 枚举
// 共用体
//