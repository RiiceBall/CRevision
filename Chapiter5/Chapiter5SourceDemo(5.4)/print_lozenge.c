#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//��ӡ�����Ǻ�ͼ��

	int i, j;  // ѭ������

	// ���ѭ�� �����У����������У�
	for (i = 0; i < 4; i++)
	{
		// ��ӡ����ǰ��Ŀո�
		for (j = 0; j <= 2 - i; j++)
		{
			printf(" ");
		}

		// �ڲ�ѭ�� �����У��������еķ��ţ�
		for (j = 0; j <= 2 * i; j++)
		{
			printf("%c", '*');
		}
		printf("\n");
	}

	// �Ǻ��°��
	for (i = 0; i < 3; i++)
	{
		// ��ӡ����ǰ��Ŀո�
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}

		// �ڲ�ѭ�� �����У��������еķ��ţ�
		for (j = 0; j <= 4 - 2 * i; j++)
		{
			printf("%c", '*');
		}
		printf("\n");
	}

	return (0);
}
