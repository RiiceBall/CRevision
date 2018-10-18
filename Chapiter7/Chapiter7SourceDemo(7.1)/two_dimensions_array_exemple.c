#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;  // 循环变量

	// 使用二维数组表示学生的成绩表
	// 四个学生的3门课成绩 - 4行 3列
	double scores[4][3] = {
		{98, 67, 89},
		{89, 67, 88},
		{99, 77, 55},
		{78, 99, 67}
	};

	printf("语文\t英语\t数学\n");
	// 使用循环打印每个数组元素
	for (i = 0; i < 4; i++)       // 外层循环控制有几个学生
	{
		for (j = 0; j < 3; j++)   // 内层循环控制有几门课
		{
			printf("%-8.2lf", scores[i][j]);
		}
		printf("\n");
	}
	return (0);
}
