#include <stdio.h>
#include <stdlib.h>
#include <string.h>   // �ַ���������

int main(void)
{
	char words1[] = "HelloWorld";
	char words2[] = {'H', 'e', 'l', 'l', 'o', 'W', 'o', 'r', 'l', 'd', '\0'};
	char words3[] = "��ã��Ͼ�ѧ�ã�";

	// strlen���������ַ����ĳ��ȣ������ַ���������־\0
	printf("words1����Ϊ��%d\n", strlen(words1));
	printf("words2����Ϊ��%d\n", strlen(words2));
	printf("words3����Ϊ��%d\n", strlen(words3));

	return (0);
}
