#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// �����������ͱ�����ָ��
	int num1 = 1024;
	int num2 = 2048;
	int *ptr1;
	int *ptr2;

	// ��������ַ���浽ָ����
	ptr1 = &num1;
	ptr2 = &num2;
	printf("num1��ֵ�ǣ�%d\tnum1�ĵ�ַ��:%p\n", num1, ptr1);
	printf("num2��ֵ�ǣ�%d\tnum2�ĵ�ַ��:%p\n", num2, ptr2);

	// ������1��ֵ��������2
	// num2 = num1; �� *ptr2 = *ptr1;  �ȼ۵�

	// ֱ�ӱ�õ�ַ
	ptr2 = ptr1;
	printf("\n���¸�ֵ��\n");
	printf("num1��ֵ�ǣ�%d\tnum1�ĵ�ַ��:%p\n", num1, ptr1);
	printf("num2��ֵ�ǣ�%d\tnum2�ĵ�ַ��:%p\n", num2, ptr2);

	*ptr2 = 11111;
	printf("\n���¸�ֵ��\n");
	printf("num1��ֵ�ǣ�%d\tnum1�ĵ�ַ��:%p\n", num1, ptr1);
	printf("num2��ֵ�ǣ�%d\tnum2�ĵ�ַ��:%p\n", num2, ptr2);

	return (0);
}
