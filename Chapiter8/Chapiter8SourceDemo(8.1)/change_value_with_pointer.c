#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num = 1024;
	int *ptr_num;

	// ȡnum�����ĵ�ַ��ֵ��ptr_num
	ptr_num = &num;  // &Ϊ��ȡ������ַ

	*ptr_num = 1111;  // �൱��num = 1111;
	printf("num��%d *ptr_num��%d\n", num, *ptr_num);
	// ����ֵ��Ϊ1111

	return (0);
}
