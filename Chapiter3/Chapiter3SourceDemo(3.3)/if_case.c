#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// ����ܼ۴���5000�ʹ�7�ۣ�����9��
	double price1 = 229.0;
	double price2 = 10240.55;
	double price3 = 2345.3;
	double total = price1 + price2 + price3;

	if (total > 5000)
	{
		total *= 0.7;   //total = total * 0.7;
	}
	else
	{
		total *= 0.9;
	}
	printf("�ܼ�����Ӧ֧���Ľ��Ϊ��%.2lf\n", total);

	return (0);
}
