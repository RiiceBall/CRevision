#include <stdio.h>
#include <stdlib.h>
#define N 5   // �궨�壬�����Ǳ����(�궨���ǳ������ܸı�ֵ)

int main(void)
{
	/*
		ɾ�����߼�
		12 34 23 67 9
		12 34 67 9 9
		1������Ҫɾ�����ֵ��±� 2
		2�����±꿪ʼ������һ������ǰ��һ������
		3��������ܳ���-1
	*/

	int count = 5;            // ��ʾ����Ԫ�صĸ���
	double power[N] = {42322, 45771, 40907, 41234, 40767};
	double delete_power;      // �û�Ҫɾ����ս��ֵ
	int delete_index = -1;    // Ҫɾ��ս��ֵ���±꣬��һ�������ܵĳ�ֵ�������ж�
	double insert_power;      // �²����ս��ֵ
	int i;                    // ѭ������

	printf("������Ҫɾ����ս��ֵ��");
	scanf("%lf", &delete_power);

	for (i = 0; i < count; i++)
	{
		if (delete_power == power[i])
		{
			// ��¼�µ�ǰ���±�
			delete_index = i;
			break ;     // �ҵ���Ҫɾ����ս��ֵ��ֱ������ѭ��������Ч��
		}
	}

	// �����жϣ��Ƿ��ҵ�����ִ�к����Ĳ���
	if (-1 == delete_index)
	{
		printf("���ź���û���ҵ�Ҫɾ����ս��ֵ��ɾ��ʧ�ܣ�\n");
	}
	else
	{
		// ���±꿪ʼ������һ������ǰ��һ������
		for (i = delete_index; i < count - 1; i++)
		{
			power[i] = power[i + 1];
		}
		// ɾ����Ϻ�һ���ǵ�������ܳ���-1  ���۷�Ҫ������
		count--;
	}

	printf("ɾ����Ľ��Ϊ:\n");
	for (i = 0; i < count; i++)
	{
		printf("%.2lf\t", power[i]);
	}

	// ɾ��֮����в���
	// ע�⣡���ɾ��ʧ�ܽ��޷�����µ�ֵ����Ϊ�����ܳ���Ϊ5
	printf("\n��������ս��ֵ��");
	scanf("%lf", &insert_power);
	power[count] = insert_power;   // ע��������
	// ���������Ϻ󣬼ǵ������ܳ���+1
	count++;

	printf("�����Ľ��Ϊ��\n");
	for (i = 0; i < count; i++)
	{
		printf("%.2lf\t", power[i]);
	}

	// �������ս��ֵ��������ֱ��ʹ��ð�����򼴿�

	return (0);
}
