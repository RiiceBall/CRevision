#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int count = 0;

	do {
		int count = 0;
		count++;    // �ڲ�count
		printf("count=%d\n", count);
		count++;    // �ڲ�count
	} while (count < 5); // �ⲿcount��������ѭ��
	printf("count=%d\n", count);

	return (0);
}
