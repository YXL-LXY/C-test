#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>

int main()
{
	FILE* pf = fopen("test.txt", "w");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//�򿪳ɹ�
	//���ļ�
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}

