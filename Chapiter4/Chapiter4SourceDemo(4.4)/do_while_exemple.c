#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// ���������C���Դ���
	int a = 1, b = 10;

	// ִ������һ��
	do {
		b -= a;
		a++;
	}while (b-- < 0);

	printf("ִ��ѭ����b��ֵΪ%d��\n", b);

	return (0);
}
