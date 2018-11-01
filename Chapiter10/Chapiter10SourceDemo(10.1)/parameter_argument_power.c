#include <stdio.h>
#include <stdlib.h>

// 自行实现pow函数
// 求第一个参数的n次幂
// double num 和 int n 都是形式参数（parameter）
double power(double num, int n);

// 求第一个参数的n次幂
double power(double num, int n)
{
	int i;  // 循环变量

	// 初始化结果为1，因为要累乘，而且最小答案为1
	double result = 1;

	// 累乘num数字n次
	for (i = 0; i < n; i++)
	{
		result *= num; // 累乘
	}

	return (result);
}


int main(void)
{
	// 8和4为实际参数（argument） - 调用
	printf("%d的%d次幂的结果为：%.2lf", 8, 4, power(8, 4));

	return (0);
}
