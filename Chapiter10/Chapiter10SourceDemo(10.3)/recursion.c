#include <stdio.h>
#include <stdlib.h>

// 使用递归的方式计算一个数字的阶乘
int factorial(int num)
{
	// 递归结束条件！如果没有结束条件将陷入死循环
	if (num == 1)
		return (1);  // 如果阶乘为1，则返回1
	else
	{
		// 递归算法！调用自己！
		// 算法过程：
		// 1、num = 5 * factorial(4);  num = 5 * 4 * 3 * 2 * 1;
		// 2、num = 4 * factorial(3);  num = 4 * 3 * 2 * 1;
		// 3、num = 3 * factorial(2);  num = 3 * 2 * 1;
		// 4、num = 2 * 1;  // 因为1直接返回1
		// 结果为：num = 5 * 4 * 3 * 2 * 1;
		num = num * factorial(num - 1);

		return (num);
	}
}

int main(void)
{
	// 计算5的阶乘
	int result = factorial(5);

	printf("5的阶乘为：%d\n", result);

	return (0);
}
