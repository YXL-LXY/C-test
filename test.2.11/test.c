#include<stdio.h>
#include<string.h>
#include<math.h>

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
//	reverse(arr);//逆序函数
//	printf("%s",arr);
//	return 0;
//}



//求0-100000的自幂数并打印出来
int main()
{
	int i = 0;
	for (i = 0; i < 100000; i++)
	{
		//确定i是几位数
		int n = 1;
		int ret = i;
		while (ret /= 10)
		{
			n++;
		}
		ret = i;
		int sum = 0;
		while (ret)
		{
			sum += pow(ret % 10, n);
			ret /= 10;
		}
		if (sum == i)
			printf("%d ", i);
	}
	return 0;
}




//喝汽水问题

