#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//打印菱形星号图形

	int i, j;  // 循环变量

	// 外层循环 控制行（行数、换行）
	for (i = 0; i < 4; i++)
	{
		// 打印星星前面的空格
		for (j = 0; j <= 2 - i; j++)
		{
			printf(" ");
		}

		// 内层循环 控制列（列数、列的符号）
		for (j = 0; j <= 2 * i; j++)
		{
			printf("%c", '*');
		}
		printf("\n");
	}

	// 星号下半层
	for (i = 0; i < 3; i++)
	{
		// 打印星星前面的空格
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}

		// 内层循环 控制列（列数、列的符号）
		for (j = 0; j <= 4 - 2 * i; j++)
		{
			printf("%c", '*');
		}
		printf("\n");
	}

	return (0);
}
