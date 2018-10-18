#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 如果总价大于5000就打7折，否则9折
	double price1 = 229.0;
	double price2 = 10240.55;
	double price3 = 2345.3;
	double total = price1 + price2 + price3;
	double discount;    // 折扣

	// 商家更改享受折扣的规则：
	// 如果购买的三种商品中有一种商品单价大于1000
	// 或三种商品总金额大于5000，折扣率为30%，
	// 否则没有折扣

	if (price1 > 1000 || price2 > 1000 || price3 > 1000 || total > 5000)
	{
		discount = 0.7;
	}
	else
	{
		discount = 0.9;
	}
	total = discount * total;   //total *= discount;
	printf("败家娘们应支付的金额为：%.2lf\n", total);

	return (0);
}
