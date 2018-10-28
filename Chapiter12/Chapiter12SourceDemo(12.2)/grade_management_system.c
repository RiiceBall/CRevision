#include <stdio.h>
#include <stdlib.h>
#define N 5

// ��дһ��С�͵�ѧ���ɼ�����ϵͳ

void input(double scores[]);  // ¼��Ԫ��
// void input(double[]);      // ֱ������дҲ����
void sort(double scores[]);   // ����
void show(double scores[]);   // ��ʾԪ��

int main(void)
{
	double scores[N];

	// 1��¼��
	input(scores); // ����Ҫ&����Ϊ���������ǵ�һ��Ԫ�صĵ�ַ
	printf("����ǰ��\n");
	show(scores);
	// 2������
	sort(scores);
	// 3������ĳ�ָ�ʽ��ӡ
	printf("�����\n");
	show(scores);

	return (0);
}

/** ¼�뺯�� */
void input(double scores[])
{
	// ������������abc[]���������κ�����
	// ֻ����û��Ǻʹ���ı���ͬ���������׸��

	int i;  // ѭ������

	for (i = 0; i < N; i++)
	{
		printf("������%d�ſεĳɼ���", i+1);
		scanf("%lf", &scores[i]);
		// scanf("%lf", (scores + i)); ����д��������
	}
}

/** ���������� */
void sort(double scores[])
{
	int i, j;     // ѭ������
	double temp;  // ��ʱ����

	// ð������
	for (i = 0; i < N - 1; i++)
	{
		for (j = 0; j < N - i - 1; j++)
		{
			if (scores[j] > scores[j + 1])
			{
				temp = scores[j];
				scores[j] = scores[j + 1];
				scores[j + 1] = temp;
			}
		}
	}
}

/** ��ʾ�ɼ����� */
void show(double scores[])
{
	int i;  // ѭ������

	printf("*****************************************************\n");
	printf("����\tӢ��\t��ѧ\t����\t��ѧ\n");
	for (i = 0; i < N; i++)
	{
		printf("%.2lf\t", *(scores + i));
	}
	printf("\n*****************************************************\n");
}
