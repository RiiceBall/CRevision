#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num = 1234;

	// ��4λ����ÿһλ��ȡ����
	printf("��λ��%d\n", num % 10);
	printf("ʮλ��%d\n", num / 10 % 10);
	printf("��λ��%d\n", num / 100 % 10);
	printf("ǧλ��%d\n", num / 1000 % 10);

	return (0);
}
