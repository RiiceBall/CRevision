#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// ĳ��˫ʮһ2015��Ľ��׶�Ϊ800�ڣ�ÿ�����25%
	// �ʣ������ٶ����꽻�׶�ﵽ2000�ڣ�

	// ����������
	int year = 2015;        // ���
	double money = 800;     // ���׶�

	// Ҫʹ��ѭ�����
	// ѭ����Ҫ��
	while (money <= 2000)
	{
		year++;
		// money = money * 1.25;
		money *= 1.25;  // ѭ�������ĸ���
	}
	printf("�����ٶȣ� %d�꽻�׶�ﵽ2000�ڡ�\n", year);

	return (0);
}
