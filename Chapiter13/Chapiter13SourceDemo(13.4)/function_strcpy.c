#include <stdio.h>
#include <stdlib.h>
#include <string.h>   // �ַ���������

int main(void)
{
	char str1[50];
	char str2[20];

	printf("����Ŀ���ַ�����");
	gets(str1);
	printf("����Դ�ַ�����");
	gets(str2);
	// �����ַ�������ʹ�õȺţ�����ʹ�ú���strcpy
	strcpy(str1, str2);
	printf("*****���ƺ�*****\n");
	printf("Ŀ���ַ�����%s\n", str1);
	printf("Դ�ַ�����%s\n", str2);

	return (0);
}
