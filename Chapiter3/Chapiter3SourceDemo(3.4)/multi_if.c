#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// ����Ƕ��if�ṹ

	double flower_price; // �ʻ��۸�

	// ��ӡ����
	printf("��һ���ºڷ�ߵ�ҹ��");
	printf("һ��С�������Լ��Ļ�������һ���ʻ���\n");
	printf("��������СŮ���ʣ�������\n");
	printf("СŮ�������⻨����Ǯһ������\n");
	printf("С������");

	// ��Ҫ¼���ʻ��۸�
	scanf("%lf", &flower_price);

	// СŮ����ʼ��С������
	printf("СŮ����");
	if (flower_price > 999999)
	{
		printf("СŮ��ֱ�����˹�ȥ��\n");
	}
	else if (flower_price >= 100000 && flower_price <= 999999) // 10��999999֮��
	{
		printf("�����飡\n");
	}
	else if (flower_price >= 10000 && flower_price < 100000)
	{
		printf("�����ְɣ�\n");
	}
	else if (flower_price > 1000 && flower_price < 10000)
	{
		printf("���Ǹ����ˣ�\n");
	}
	else
	{
		printf("���ޣ�\n");
	}

	return (0);
}
