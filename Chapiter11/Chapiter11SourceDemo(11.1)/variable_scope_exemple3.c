#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1 = 99;
	{ //�����-��
		int num2=199;
		printf("%d\n", num1 + num2);
	}
	printf("%d\n", num1 + num2); // ������Ϊ������num2δ����

	return (0);
}
