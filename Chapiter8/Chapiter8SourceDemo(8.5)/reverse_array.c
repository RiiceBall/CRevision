#include <stdio.h>
#include <stdlib.h>
#define N 5

int main(void)
{
	// ʵ�����������  - ԭ����ð���������˳���������λԪ�ؽ��н���

	int array[] = {15, 20, 25, 30, 35};
	int temp;  // �滻����
	int i;     // ѭ������

	// ��ӡ����ǰ�����
	printf("����ǰ��\n");
	for (i = 0; i < N; i++)
	{
		printf("%d\t",*(array + i));
	}

	for (i = 0; i < N / 2; i++) // ע������Ľ�������������N����������
	{
		// �̶���ʽ
		// ��i��ֵ�͵�N-i-1��ֵ����
		temp = array[i];
		array[i] = array[N - i -1];
		array[N - i -1] = temp;
	}

	// ��ӡ���������
	printf("\n�����\n");
	for (i = 0; i < N; i++)
	{
		printf("%d\t",*(array + i));
	}

	return (0);
}
