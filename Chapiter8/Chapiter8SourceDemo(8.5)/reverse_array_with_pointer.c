#include <stdio.h>
#include <stdlib.h>
#define N 5

int main(void)
{
	// ʵ�����������  - ԭ����ð���������˳���������λԪ�ؽ��н���

	int array[] = {15, 20, 25, 30, 35};
	int temp;  // �滻����
	int i;     // ѭ������

	// ʹ��ָ������
	int *ptr_array_start = array;        // ָ��ָ����Ԫ�صĵ�ַ
	int *ptr_array_end = array + N - 1;  // ָ��ָ��ĩβԪ�صĵ�ַ

	// array + 4 �� array + N - 1 �ǵȼ�д��
	// array[4] N-1���Դ������Ԫ�ص��±�array[N - 1]

	// ��ӡ����ǰ�����
	printf("����ǰ��\n");
	for (i = 0; i < N; i++)
	{
		printf("%d\t",*(array + i));
	}

	// ����ָ�벻����βָ��ʱ
	while (ptr_array_start != ptr_array_end )
	{
		// �̶���ʽ������ָ��ǰ��*��������ֵ�Ľ�������
		temp = *ptr_array_end;
		*ptr_array_end = *ptr_array_start;
		*ptr_array_start = temp;

		// �׵�ַ���μ�һ
		ptr_array_start++;  // ˼����Ϊʲô�����û�м�*����

		// β��ַ���μ�һ
		ptr_array_end--;
	}

	// ��ӡ���������
	printf("\n�����\n");
	for (i = 0; i < N; i++)
	{
		printf("%d\t",*(array + i));
	}

	return (0);
}
