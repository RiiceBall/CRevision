#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// ��Сд��ĸת��Ϊ��д��ĸ
	// Сд��ĸ��ASCII��ȴ�д��ĸ��ASCII���32
	// ���Խ�Сд��ĸת��Ϊ��д��ĸ����������
	// 1����Сд��ĸ��ȥ32
	// 2����Сд��ĸ��ȥ�ո���Ϊ�ո��ASCII��Ϊ32��

	char ch = 'a';
	printf("����1��%c\n", ch - 32);
	printf("����2��%c\n", ch - ' ');

	return (0);
}
