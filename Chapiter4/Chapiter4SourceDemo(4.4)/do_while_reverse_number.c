#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// ������������
	// һ�������û����룬һ�����������ת������
	int value = 0, right_num;

	// �����û����벢����Ƿ�Ϊ����
	do
	{
		printf("������һ������");
		scanf("%d", &value);
		if (value <= 0)
			printf("����Ϊ������\n");
	}while (value <= 0);

	// ��ת����
	printf("\n��ת�����Ϊ��\n");
	do
	{
		right_num = value % 10;
		printf("%d", right_num);
		value = value / 10;
	}while (value != 0);
	printf("\n");

	return (0);
}
