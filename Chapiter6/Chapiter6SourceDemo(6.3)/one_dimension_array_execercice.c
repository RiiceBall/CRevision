#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	/*
		有一个数列：8，4，2，1，23，344，12
		循环输出数列的值
		求数列中所有数值的和及平均值
		猜数游戏：从键盘中任意输入一个数据，判断数列中是否包含此数
	*/

	int i;           // 循环变量
	int sum = 0;     // 求和
	double avg;      // 求平均
	int search_num;  // 要查找的数字

	// 1、定义数组，并初始化
	int nums[] = {8, 4, 2, 1, 23, 344, 12};

	// 2、循环输出
	printf("输出数组元素：\n");
	for (i = 0; i < 7; i++)
	{
		printf("%d\t", nums[i]);
	}
	printf("\n**********************\n");

	// 3、求和和求平均值
	for (i = 0; i < 7; i++)
	{
		sum += nums[i];     // 经典累加
	}
	avg = sum / 7.0;

	// 4、查找数字
	printf("请输入要查找的数字：");
	scanf("%d", &search_num);
	for (i = 0; i < 7; i++)
	{
		// 一个一个元素进行对比（穷举法）
		// 如果我要查找的数字跟数组中的某个元素相同
		if (search_num == nums[i])
		{
			// 找到了
			printf("猿粪啊，找到了相同的元素！\n");
			// 找到后，记得跳出循环
			break ;
		}
	}

	// 结束循环后，我们如何判断是否找到了呢？？？？
	// 通过观察，循环正常退出时，i的值应该为7
	if (i == 7)
	{
		printf("茫茫人海，没有找到合意的数字！\n");
	}

	return (0);
}
