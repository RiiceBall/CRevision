#include <stdio.h>
#include <stdlib.h>

void change_num(void)
{
	// �ֲ�����������main�е�num1��num2
	int num1 = 5, num2 = 8;
	num1 = 155;
	num2 = 288;
}

int main(void)
{
	int num1 = 5, num2 = 8;

	change_num(); // ���ú���
	printf("num1 = %d\tnum2 = %d\n",num1,num2); // ��ӡ5��8������155��288

	return (0);
}
