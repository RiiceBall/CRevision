#include <stdio.h>
#include <stdlib.h>
#define N 5

int main(void)
{
	// 动态赋值

	// 动态录入
	double score[N];  // 定义一个N大小的数组
	int i;            // 循环变量

	// 使用循环操作数组时，要注意：一个循环尽量只做一件事
	for (i = 0; i < N; i++)
	{
		printf("请输入第%d位同学的成绩：", i + 1);
		scanf("%lf", &score[i]);
	}

	// 下面的循环用来打印数组元素
	for (i = 0; i < N; i++)
	{
		printf("第%d位同学的成绩是：%.2lf\n", i + 1, score[i]);
	}

	return (0);
}
