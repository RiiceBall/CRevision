#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	// ��ʾ�ַ�������
	char str1[100] = "��ã��й���";
	char str2[20] = "��Ҳ�ã�����";

	printf("ƴ��ǰ��\n");
	printf("str1: %s\tstr2: %s\n", str1, str2);

	// �ַ�������
	// strcat���ڶ����ַ���ƴ�ӵ���һ���ַ����ĺ���
	strcat(str1, str2);

	printf("ƴ�Ӻ�\n");
	printf("str1: %s\tstr2: %s\n", str1, str2);

	return (0);
}
