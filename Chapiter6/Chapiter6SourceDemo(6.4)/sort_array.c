#include <stdio.h>
#include <stdlib.h>
#define N 5     // 宏定义，并不是必须的(宏定义是常量不能改变值)

int main(void)
{
	/*
		16 25 9 90 23
		降序排列 - 从大到小
		冒泡排序的基础原理：遍历和交换

		第一轮循环：
		某个数字小于后面的数字，那么就交换
		1   25 16 9 90 23
		2   25 16 9 90 23
		3   25 16 90 9 23
		4   25 16 90 23 9     最小的数字就冒到了最后
		1、需要比较多轮 （数组长度 - 1）轮
		2、每一轮比较的此数比上一次-1次
		（数组长度 - 1） -  当前的轮数
	*/

	int i, j;     // 循环变量
	int temp;     // 用来交换的临时变量
	int nums[N] = {16, 25, 9, 90, 23};

	// 外层循环控制  轮数
	for (i = 0; i < N - 1; i++)
	{
		// 内层循环控制  每轮的比较次数
		for (j = 0; j < N - i - 1; j++)
		{
			// 如果当前值小于后面一个值，就交换
			if (nums[j] < nums[j + 1])
			{
				temp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = temp;
			}
		}
	}

	printf("排序后的结果是：\n");
	for (i = 0; i < N; i++)
	{
		printf("%d\t", nums[i]);
	}

	// 外层循环控制  轮数
	for (i = 0; i < N - 1; i++)
	{
		// 内层循环控制  每轮的比较次数
		for (j = 0; j < N - i - 1; j++)
		{
			// 如果当前值大于后面一个值，就交换
			if (nums[j] > nums[j + 1])
			{
				temp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = temp;
			}
		}
	}

	printf("\n逆序后的结果是：\n");
	for (i = 0; i < N; i++)
	{
		printf("%d\t", nums[i]);
	}

	return (0);
}
