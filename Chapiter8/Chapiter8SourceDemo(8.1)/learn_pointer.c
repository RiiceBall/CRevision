#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num = 9;
	int * ptr_num = &num;       // ��num�ĵ�ַ��ֵ��prt_num
	int * ptr_num2 = &ptr_num;  // ͷ�۵㣺ȡָ��ĵ�ַ��ֵ��ָ��

	// %pָ��ռλ�� %x 16����ռλ��
	// ��ӡnum�����ĵ�ַ
	printf("num�����ĵ�ַ�ǣ�%p\t %x\n", ptr_num, &num);
	printf("\nָ��ptr_num�ĵ�ַΪ��%p\n", ptr_num2);

	// ʹ��ָ���޸ı�����ֵ
	*ptr_num = 9999;
	printf("*ptr_num��Ӧ��ֵΪ��%d\n", num);

	return (0);
}
