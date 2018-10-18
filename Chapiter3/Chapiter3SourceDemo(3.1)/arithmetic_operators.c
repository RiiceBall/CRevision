#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 算法运算符示例
	// 定义两个整型变量
	int num1 = 5, num2 = 2;

	// 4个double型变量用来存放计算结果
	double result1, result2, result3, result4, result5;

	// 打印两个整型变量的值
	printf("num1 = %d \t num2 = %d\n", num1, num2);

	// 使用运算符
	result1 = num1 / num2;  // 除法
	result2 = num1 % num2;  // 取模
	result3 = num1 * num2;  // 乘法
	result4 = num1++;       // 后置，先赋值后加加
	result5 = --num2;       // 前置，先减减后赋值

	// 打印结果
	printf("num1 / num2 = %lf\n", result1);
	printf("num1 %% num2 = %lf\n", result2);
	printf("num1 * num2 = %lf\n", result3);
	printf("num1++ = %lf\n", result4);
	printf("--num2 = %lf\n", result5);

	return (0);
}
