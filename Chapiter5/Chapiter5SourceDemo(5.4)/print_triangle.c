#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// ��ӡ�������Ǻ�ͼ�Σ��ڿ��м�

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
			// �ڿյ�ԭ���ж�ʲôʱ���ӡ�Ǻţ�ʲôʱ���ӡ�ո�
			if (i == 0 || i == 3 || j == 0 || j == 2 * i)
				printf("%c", '*');
			else
				printf(" ");
		}
		printf("\n");
	}

	return (0);
}
