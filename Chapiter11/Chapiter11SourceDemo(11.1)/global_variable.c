#include <stdio.h>
#include <stdlib.h>

int count;  //ȫ�ֱ��� - ��Ĭ��ֵ��0��

void add(void)
{
	count++;
}

int main(void)
{
	// ��������add��count�Ľ��Ϊ2
	add();
	add();
	printf("count = %d\n", count);

	return (0);
}
