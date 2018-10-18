#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 算法运算符 + - * / %
	// 关系运算符 > < >= <= == !=
	// 逻辑运算符 && || ！
	// 赋值运算符 = += -= /= *= %=

	printf("8 > 9 的结果为 %d\n", 8 > 9);   // 运行结果 0
	printf("8 == 9 的结果为 %d\n", 8 == 9); // 运行结果 0
	printf("9 == 9 的结果为 %d\n", 9 == 9); / /运行结果 1

	printf("5 > 9 && 4 < 7 的结果为 %d\n", 5 > 9 && 4 < 7); // 运行结果 0

	// 后置++
	int num = 10;	// 10 > 11 && 9 < 20
	// &&：左边为假，右边不运行
	// 左边10 > 11为假，右边9 < 20不运行
	// 后置++，先执行后++；前置--，先--后执行
	int result = num++ > 11 && --num < 20;  // 短路运算

	// 问题：result = ？		num = ?
	printf("result = %d\tnum = %d\n", result, num);
	// 运行结果  result = 0      num = 11

	// 前置--
	int num1 = 10;	//	9 < 20 && 9 > 11
	int result1 = --num1 < 20 && num1++ > 11;  // 短路运算
	// 问题：result1 = ？		num1 = ?
	printf("result1 = %d\tnum1 = %d\n", result1, num1);
	// 运行结果  result1 = 0      num1 = 10

	return (0);
}
