#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// ѭ�����������µĹ���������������ڵ�ƽ�����ʡ�

	int i;
	double salary;	      // ����
	double total_salary;  // �����µ��ܹ���
	double avg_salary;    // �����µ�ƽ������

	for (i = 0; i < 6; i++)
	{
		printf("�������%d���µĹ��ʣ�", i + 1);
		scanf("%lf", &salary);

		// �ۼ�
		total_salary += salary;
	}

	// ����ƽ������
	avg_salary = total_salary / 6;
	printf("ƽ������Ϊ%.2lfԪ��\n", avg_salary);

	return (0);
}
