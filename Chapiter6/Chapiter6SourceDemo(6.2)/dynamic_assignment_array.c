#include <stdio.h>
#include <stdlib.h>
#define N 5

int main(void)
{
	// ��̬��ֵ

	// ��̬¼��
	double score[N];  // ����һ��N��С������
	int i;            // ѭ������

	// ʹ��ѭ����������ʱ��Ҫע�⣺һ��ѭ������ֻ��һ����
	for (i = 0; i < N; i++)
	{
		printf("�������%dλͬѧ�ĳɼ���", i + 1);
		scanf("%lf", &score[i]);
	}

	// �����ѭ��������ӡ����Ԫ��
	for (i = 0; i < N; i++)
	{
		printf("��%dλͬѧ�ĳɼ��ǣ�%.2lf\n", i + 1, score[i]);
	}

	return (0);
}
