#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// ����ܼ۴���5000�ʹ�7�ۣ�����9��
	double price1 = 229.0;
	double price2 = 10240.55;
	double price3 = 2345.3;
	double total = price1 + price2 + price3;
	double discount;    // �ۿ�

	// �̼Ҹ��������ۿ۵Ĺ���
	// ��������������Ʒ����һ����Ʒ���۴���1000
	// ��������Ʒ�ܽ�����5000���ۿ���Ϊ30%��
	// ����û���ۿ�

	if (price1 > 1000 || price2 > 1000 || price3 > 1000 || total > 5000)
	{
		discount = 0.7;
	}
	else
	{
		discount = 0.9;
	}
	total = discount * total;   //total *= discount;
	printf("�ܼ�����Ӧ֧���Ľ��Ϊ��%.2lf\n", total);

	return (0);
}
