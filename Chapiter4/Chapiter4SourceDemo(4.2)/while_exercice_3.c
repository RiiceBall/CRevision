#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 某宝双十一2015年的交易额为800亿，每年递增25%
	// 问：按此速度哪年交易额达到2000亿？

	// 先声明变量
	int year = 2015;        // 年份
	double money = 800;     // 交易额

	// 要使用循环解决
	// 循环三要素
	while (money <= 2000)
	{
		year++;
		// money = money * 1.25;
		money *= 1.25;  // 循环变量的更新
	}
	printf("按此速度， %d年交易额达到2000亿。\n", year);

	return (0);
}
