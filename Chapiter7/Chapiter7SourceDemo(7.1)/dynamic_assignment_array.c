#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COL 3

int main(void)
{
	double score[ROW][COL];  // ����һ������ɼ��Ķ�ά����
	int i, j;    // ѭ������

	// ѭ��¼��ɼ�
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			printf("��%dλͬѧ�ĵ�%d�ſγɼ���", i + 1, j + 1);
			scanf("%lf", &score[i][j]);
		}
	}

	// ��ӡ�ɼ�
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			printf("%.2lf\t", score[i][j]);
		}
		printf("\n");
	}

	return (0);
}
