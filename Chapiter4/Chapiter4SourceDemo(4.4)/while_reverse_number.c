#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// ������������
	// һ�������û����룬һ�����������ת������
	int value = 0, right_num;

	// �����û����벢����Ƿ�Ϊ����
	while (value <= 0)
	{
		printf("������һ������");
		scanf("%d", &value);
		if (value <= 0)
			printf("����Ϊ������\n");
	}

	// ��ת����
	printf("\n��ת�����Ϊ��\n");
	while (value != 0)
	{
		right_num = value % 10;
		printf("%d", right_num);
		value = value / 10;
	}
	printf("\n");

	return (0);
}
