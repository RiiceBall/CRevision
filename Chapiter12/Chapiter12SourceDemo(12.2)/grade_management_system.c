#include <stdio.h>
#include <stdlib.h>
#define N 5

// 书写一个小型的学生成绩管理系统

void input(double scores[]);  // 录入元素
// void input(double[]);      // 直接这样写也可以
void sort(double scores[]);   // 排序
void show(double scores[]);   // 显示元素

int main(void)
{
	double scores[N];

	// 1、录入
	input(scores); // 不需要&，因为数组名就是第一个元素的地址
	printf("排序前：\n");
	show(scores);
	// 2、排序
	sort(scores);
	// 3、按照某种格式打印
	printf("排序后：\n");
	show(scores);

	return (0);
}

/** 录入函数 */
void input(double scores[])
{
	// 参数名可以是abc[]或者其他任何名字
	// 只是最好还是和传入的变量同名，不容易搞混

	int i;  // 循环变量

	for (i = 0; i < N; i++)
	{
		printf("请输入%d门课的成绩：", i+1);
		scanf("%lf", &scores[i]);
		// scanf("%lf", (scores + i)); 两种写法都可以
	}
}

/** 数组排序函数 */
void sort(double scores[])
{
	int i, j;     // 循环变量
	double temp;  // 临时变量

	// 冒泡排序
	for (i = 0; i < N - 1; i++)
	{
		for (j = 0; j < N - i - 1; j++)
		{
			if (scores[j] > scores[j + 1])
			{
				temp = scores[j];
				scores[j] = scores[j + 1];
				scores[j + 1] = temp;
			}
		}
	}
}

/** 显示成绩函数 */
void show(double scores[])
{
	int i;  // 循环变量

	printf("*****************************************************\n");
	printf("语文\t英语\t数学\t物理\t化学\n");
	for (i = 0; i < N; i++)
	{
		printf("%.2lf\t", *(scores + i));
	}
	printf("\n*****************************************************\n");
}
