#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// �ؼ���const��������ͨ��������Ϊ��д
	const int NUM_TEST = 100;  // ���� ���ܱ��޸ĵ���
	// NUM_TEST++;             // ����޸ĳ����ᱨ��

	const int N = 20;
	int i;

	// ���ó���������ѭ������
	for (i = 0; i < N; i++)
	{
		printf("�ٱ���\n");
	}


	return (0);
}
