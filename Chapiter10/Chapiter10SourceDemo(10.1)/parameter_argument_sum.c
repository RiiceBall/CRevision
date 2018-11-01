#include <stdio.h>
#include <stdlib.h>

// 求a加b的值
// int a 和 int b 都是形式参数（parameter）
int sum(int a, int b);

// 求a加b的值
int sum(int a, int b)
{
	// a, b为形式参数

	// 返回两个值之和
	return (a + b);
}

int main(void)
{
	int num1 = 10;
	int num2 = 20;

	// num1, num2为实际参数（argument）
	int result = sum(num1, num2);
	printf("结果：%d\n", result);

	return (0);
}
