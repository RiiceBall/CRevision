#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 打印三角形星号图形，挖空中间

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
			// 挖空的原理，判断什么时候打印星号，什么时候打印空格
			if (i == 0 || i == 3 || j == 0 || j == 2 * i)
				printf("%c", '*');
			else
				printf(" ");
		}
		printf("\n");
	}

	return (0);
}
