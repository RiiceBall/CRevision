#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 强制类型转换
	// 定义两个整型变量
	int num1 = 5, num2 = 2;

	// 将两个整形结果强制转换为double类型
	double result = (double)num1 / num2;
	printf("num1 / num2 = %lf\n", result);

	// double > float > long > int > short
	double num = 6;         //小类型转大类型 —— 自动类型转换
	int num3 = (int)num;    //大类型转小类型 —— 强制类型转换

	printf("double %lf, int %d\n", num, num3);

	return (0);
}
