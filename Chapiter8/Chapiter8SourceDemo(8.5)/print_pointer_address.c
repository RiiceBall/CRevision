#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int array[] = {15, 20, 25, 30, 35};
	int i;   // ѭ������
	int *ptr_array = array;  // ��ȡ�����ַ

	// ������Ϻ󣬾Ϳ���ʹ��ָ���������Ԫ����
	// �����ַ�ʽ���Է�������Ԫ��

	// ��һ�֣�������ʽ���ʣ�ptr_array[i]
	printf("��һ�ַ��ʷ�ʽ��ptr_array[i]\n");
	for (i = 0; i < 5; i++)
	{
		printf("��%d��Ԫ�ص�ֵΪ%d\t��ַΪ��%p\n", i + 1, ptr_array[i], &ptr_array[i]);
	}
	printf("\n");

	// �ڶ��֣�ָ����ʽ���ʣ�*(ptr_array + i)
	printf("�ڶ��ַ��ʷ�ʽ��*(ptr_array + i)\n");
	for (i = 0; i < 5; i++)
	{
		printf("��%d��Ԫ�ص�ֵΪ%d\t��ַΪ��%p\n", i + 1, *(ptr_array + i), ptr_array + i);
	}
	printf("\n");

	// �����֣������׵�ַ��ÿ�ζ�Ҫ�ƶ�ָ�룬*ptr_array
	printf("�����ַ��ʷ�ʽ��*ptr_array\n");
	for (i = 0; i < 5; i++)
	{
		printf("��%d��Ԫ�ص�ֵΪ%d\t��ַΪ��%p\n", i + 1, *ptr_array, ptr_array);
		// ÿ��ѭ�������ƶ�ָ���ָ��Ҫע�����ã�ptr_array = array��
		ptr_array++;
	}
	ptr_array = array;

	return (0);
}
