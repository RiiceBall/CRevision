#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// ��1-100֮���ż����
	// ѭ���ۼ�
	// �ж��Ƿ�Ϊż����ģ2�Ƿ�Ϊ0
	// ���Ϊ���������������Ϊż����ִ���ۼ�

	int i;         // ѭ������
	int sum = 0;   // ż����

	for (i = 0; i < 100; i++)
	{
		if (i % 2 != 0)   // ���������
			continue ;    // �������������
		sum += i;
	}
	printf("%d", sum);

	return (0);
}
