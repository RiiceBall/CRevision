#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// ��������������׵�ַ��������Ԫ�ص�ַ��
	// ��ά�������⣺����n��һά���������

	int i, j;  // ѭ������
	int score[5][3] = {
		{25, 56, 98},
		{35, 45, 78},
		{28, 58, 95},
		{14, 56, 97},
		{78, 98, 99},
	};
	int (*ptr_score)[3] = score; // ��ά����ָ��

	for (i = 0; i < 5; i++)      // ���ѭ��������
	{
		for (j = 0; j < 3; j++)  // �ڲ�ѭ��������
		{
			// �ж��ִ�ӡ��ʽ��
			// printf("%d\t", score[i][j]); // score[i] => *(score + i)
			// printf("%d\t", *(score[i] + j));
			// printf("%d\t", *(*(score + i) + j));
			printf("%d\t", *(*(ptr_score + i) + j));
		}
		printf("\n");
	}


	// ���·�ʽ��ӡ̫�鷳
	/*
	// ������һ�����ݣ���һ������������score[0]����*(score + 0)
	for (i = 0; i < 3; i++)
	{
		printf("%d\t", score[0][i]);
	}

	printf("\n");
	// �����ڶ������ݣ�score[1]����*(score + 1)
	for (i = 0; i < 3; i++)
	{
		printf("%d\t", *(*(score + 1) + i));
	}
	*/

	return (0);
}
