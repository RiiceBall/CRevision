#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num = 1024;  // ���ͱ���
	int *ptr_num;    // ����ָ�����

	// ȡnum�ĵ�ַ��ֵ��ptr_num����
	ptr_num = &num;

	printf("num��ֵΪ��%d\n", num);
	printf("num���ڴ��ַΪ��%p\n", &num);
	printf("ptr_num��ֵΪ��%p\n", ptr_num);
	printf("ptr_num���ڴ��ַΪ��%p\n", &ptr_num);
	printf("*ptr_numָ���ֵΪ��%d\n", *ptr_num);

	return (0);
}
