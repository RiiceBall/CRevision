#include <stdio.h>
#include <stdlib.h>

// ʹ�õݹ�ķ�ʽ����һ�����ֵĽ׳�
int factorial(int num)
{
	// �ݹ�������������û�н���������������ѭ��
	if (num == 1)
		return (1);  // ����׳�Ϊ1���򷵻�1
	else
	{
		// �ݹ��㷨�������Լ���
		// �㷨���̣�
		// 1��num = 5 * factorial(4);  num = 5 * 4 * 3 * 2 * 1;
		// 2��num = 4 * factorial(3);  num = 4 * 3 * 2 * 1;
		// 3��num = 3 * factorial(2);  num = 3 * 2 * 1;
		// 4��num = 2 * 1;  // ��Ϊ1ֱ�ӷ���1
		// ���Ϊ��num = 5 * 4 * 3 * 2 * 1;
		num = num * factorial(num - 1);

		return (num);
	}
}

int main(void)
{
	// ����5�Ľ׳�
	int result = factorial(5);

	printf("5�Ľ׳�Ϊ��%d\n", result);

	return (0);
}
