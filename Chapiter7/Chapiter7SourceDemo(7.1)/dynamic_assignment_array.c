#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COL 3

int main(void)
{
	double score[ROW][COL];  // 创建一个保存成绩的二维数组
	int i, j;    // 循环变量

	// 循环录入成绩
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			printf("第%d位同学的第%d门课成绩：", i + 1, j + 1);
			scanf("%lf", &score[i][j]);
		}
	}

	// 打印成绩
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			printf("%.2lf\t", score[i][j]);
		}
		printf("\n");
	}

	return (0);
}
