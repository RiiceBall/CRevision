#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 如果总价大于5000就打7折，否则9折
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
	printf("败家娘们应支付的金额为：%.2lf\n", total);

	return (0);
}
