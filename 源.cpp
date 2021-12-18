#include<stdio.h>

int main()
{
	char a[100];
	int count0 = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0;
	printf("请输入一个字符串：");
	gets_s(a);
	char* p = a;
	while (*p != 0)
	{
		if (*p >= 'A' && *p <= 'Z')
			count0++;
		else if (*p >= 'a' && *p <= 'z')
			count1++;
		else if (*p >= '0' && *p <= '9')
			count2++;
		else if (*p == ' ')
			count3++;
		else count4++;
		p++;
	}
	printf("大写字母有%d个\n",count0);
	printf("小写字母有%d个\n", count1);
	printf("数字有%d个\n", count2);
	printf("空格有%d个\n", count3);
	printf("其他字符有%d个\n", count4);
	return 0;
}





#include<stdio.h>
#include<string.h>

void copy(int m, char a[], char b[])
{
	char* q = a + m - 1;
	int i = 0;
	while (*q != 0)
	{
		b[i] = *q;
		q++;
		i++;
	}
}

int main()
{
	char ch[500];
	printf("请输入一个字符串：\n");
	gets_s(ch);
	char* p = ch;
	int num = 0;
	while (*p != 0)
	{
		num++;
		p++;
	}
	printf("字符串长度为%d\n",num);
	int m;
	char ch0[500]={0};
	printf("从第几个字符开始复制\n");
	scanf_s("%d", &m);
	copy(m, ch,ch0);
	puts(ch0);
}	






#include<stdio.h>

int add (int, int);
int sub(int, int);
int mil(int, int);
float div(float, float);
void process(int, int, int(*fun)(int, int));
void process0(float, float, float(*fun)(float, float));

int main()
{
	float a, b;
	printf("请输入两个整数：");
	scanf_s("%f%f", &a, &b);
	process(a, b, add);
	process(a, b, sub);
	process(a, b, mil);
	process0(a, b, div);
}

void process(int x, int y, int(*fun)(int, int))
{
	int result;
	result = (*fun)(x, y);
	printf("%d\n",result);
}

void process0(float x, float y, float(*fun)(float, float))
{
	float result;
	result = (*fun)(x, y);
	printf("%f\n", result);
}

int add(int x, int y)
{
	printf("sum=");
	return (x + y);
}

int sub(int x, int y)
{
	printf("dif=");
	return (x - y);
}

int mil(int x, int y)
{
	printf("product=");
	return (x * y);
}

float div(float x, float y)
{
	printf("consult=");
	return (x / y);
}






