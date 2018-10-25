#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i = 0;
	double score[] = {98, 89, 65, 43, 76};
	// 使用指针访问数组元素时，在printf中仍然只能用变量类型来代替 %.2lf， 而非%p 或者%s
	double *prt_score = score;

	// score和&score[0]都代表数组首地址
	printf("数组的首地址：%p\t数组的首元素地址；%p\n", score, &score[0]);

	// 数组的第一个元素的地址就是数组首地址
	for(i = 0; i < 5; i++)
	{
		printf("%.2lf\n", prt_score[i]);      // 打印数组的第i个元素
		printf("%.2lf\n", *(prt_score + i));  // 打印数组的第i个元素
		// printf("%.2lf\n",*prt_score++);    // 如果++指针地址将丢失开头
	}

	// 假设我们希望再次打印数组的每个元素
	printf("\n****************************\n");
	// prt_score = score;  // 如果使用*prt_score++则需要重置prt_score（指针）的位置
	for(i = 0;i < 5 ;i++)
	{
		printf("%.2lf\n", prt_score[i]);
		printf("%.2lf\n", *(prt_score + i));
		// printf("%.2lf\n", *prt_score++);
	}

	return (0);
}
