#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// ɱ���� switch �ṹ���÷�
	// һ�㴦��������ĳ����������
	// ��֪��ĳ�����ж�����
	// �߼����û������·ݣ������·��жϵ��µ�����

	int month;  // �û�������·�

	printf("�������·ݣ������ж�������");
	scanf("%d", &month);

	switch (month)
	{
	case 1:
		printf("1����31�죡\n");
		printf("1�¹�������꣡\n");
		break;
	case 2:
		// ����ܹ����ж��Ƿ�����
		printf("2����28�죡\n");
		printf("�����д�˵�е���٣�\n");
		break;
	case 3:
		printf("3����31�죡\n");
		printf("�̻����������ݣ�\n");
		break;
	case 4:
		printf("4����30�죡\n");
		break;
	default:
		printf("��ǰ������ʱֻ���ж�1��4�µ������\n");
		break;
	}

	return (0);
}