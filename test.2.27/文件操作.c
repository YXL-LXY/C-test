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
//	//打开成功
//	//读文件
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//scanf从标准输入(键盘)读取格式化的数据
//fscanf从所以输入流读取格式化的数据
//sscanf从字符串中读取一个格式化的数据
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
//	//读文件
//	fscanf(pf, "%d %lf", &(s.n), &(s.d));
//	printf("%d %lf\n", s.n, s.d);
//	//关闭文件
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
//	//把格式化数据转换成字符串放到arr
//	sprintf(arr, "%d %lf %s", s.n, s.d, s.name);
//	printf("%s\n", arr);
//	//从arr中提取格式化数据
//	sscanf(arr, "%d %lf %s", &(tmp.n), &(tmp.d), tmp.name);
//	printf("%d %lf %s\n", tmp.n, tmp.d, tmp.name);
//	return 0;
//}