#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	/*
		ĳ��Ϸ�н�ս������ʵ���˺����㹫ʽΪ��
		����ʵ������˺� = ��������˺� * ��������� + 100�� / 100
		����������������������˺�256��Ҫ�����������������ӡ����ʵ������˺�
	*/

	// 1����Ҫ���弸�������� -- ����ʵ������˺�����ҵ���������������˺�
	// 2����Ӧʲô���������أ�       double           int        double

	double fact_damage;         // ����ʵ������˺�
	double max_damage = 256;    // ����˺�
	int strength;               // �������

	printf("��������뵱ǰ��ɫ��������");

	// &ȡ��ַ
	scanf("%d", &strength);

	// ���ù�ʽ
	fact_damage = max_damage * (strength + 100) / 100;
	printf("����ʵ���˺��ǣ�%.2lf", fact_damage);

	return (0);
}
