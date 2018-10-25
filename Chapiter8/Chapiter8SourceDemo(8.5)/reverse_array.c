#include <stdio.h>
#include <stdlib.h>
#define N 5

int main(void)
{
	// 实现数组的逆序  - 原理：（冒泡排序成了顺序）数组的首位元素进行交换

	int array[] = {15, 20, 25, 30, 35};
	int temp;  // 替换变量
	int i;     // 循环变量

	// 打印逆序前结果：
	printf("逆序前：\n");
	for (i = 0; i < N; i++)
	{
		printf("%d\t",*(array + i));
	}

	for (i = 0; i < N / 2; i++) // 注意这里的交换次数到底是N还是其他？
	{
		// 固定公式
		// 第i个值和第N-i-1个值交换
		temp = array[i];
		array[i] = array[N - i -1];
		array[N - i -1] = temp;
	}

	// 打印逆序后结果：
	printf("\n逆序后：\n");
	for (i = 0; i < N; i++)
	{
		printf("%d\t",*(array + i));
	}

	return (0);
}
