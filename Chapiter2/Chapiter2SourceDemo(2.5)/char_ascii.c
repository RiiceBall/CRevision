#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char ch1 = 'a'; // �ַ�a
	char ch2 = 'A'; // �ַ�A
	char ch3 = ' '; // �ַ��ո�
	char ch4 = '0'; // �ַ�0����������0����
	char ch5 = '!'; // �ַ���̾��

	// ÿ���ַ��������Ӧ��ASCII�루��ʵ����һЩ���֣�
	// �����Ҫ��ӡ�ַ���Ҫ��%c
	// �����Ҫ��ӡASCII����Ҫʹ��%d
	printf("�ַ�\tASCII��\n");
	printf("%c\t%d\n", ch1, ch1);
	printf("%c\t%d\n", ch2, ch2);
	printf("%c\t%d\n", ch3, ch3);
	printf("%c\t%d\n", ch4, ch4);
	printf("%c\t%d\n", ch5, ch5);

	return (0);
}
