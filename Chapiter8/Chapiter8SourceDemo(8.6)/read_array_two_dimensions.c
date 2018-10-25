#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 数组名是数组的首地址（数组首元素地址）
	// 二维数组的理解：是由n个一维数组所组成

	int i, j;  // 循环变量
	int score[5][3] = {
		{25, 56, 98},
		{35, 45, 78},
		{28, 58, 95},
		{14, 56, 97},
		{78, 98, 99},
	};
	int (*ptr_score)[3] = score; // 二维数组指针

	for (i = 0; i < 5; i++)      // 外层循环控制行
	{
		for (j = 0; j < 3; j++)  // 内层循环控制列
		{
			// 有多种打印方式：
			// printf("%d\t", score[i][j]); // score[i] => *(score + i)
			// printf("%d\t", *(score[i] + j));
			// printf("%d\t", *(*(score + i) + j));
			printf("%d\t", *(*(ptr_score + i) + j));
		}
		printf("\n");
	}


	// 以下方式打印太麻烦
	/*
	// 遍历第一行数据：第一行数组名就是score[0]或者*(score + 0)
	for (i = 0; i < 3; i++)
	{
		printf("%d\t", score[0][i]);
	}

	printf("\n");
	// 遍历第二行数据：score[1]或者*(score + 1)
	for (i = 0; i < 3; i++)
	{
		printf("%d\t", *(*(score + 1) + i));
	}
	*/

	return (0);
}
