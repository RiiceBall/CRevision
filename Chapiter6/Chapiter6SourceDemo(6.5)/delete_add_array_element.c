#include <stdio.h>
#include <stdlib.h>
#define N 5   // 宏定义，并不是必须的(宏定义是常量不能改变值)

int main(void)
{
	/*
		删除的逻辑
		12 34 23 67 9
		12 34 67 9 9
		1、查找要删除数字的下标 2
		2、从下标开始，后面一个覆盖前面一个数字
		3、数组的总长度-1
	*/

	int count = 5;            // 表示数组元素的个数
	double power[N] = {42322, 45771, 40907, 41234, 40767};
	double delete_power;      // 用户要删除的战力值
	int delete_index = -1;    // 要删除战力值的下标，给一个不可能的初值，方便判断
	double insert_power;      // 新插入的战力值
	int i;                    // 循环变量

	printf("请输入要删除的战力值：");
	scanf("%lf", &delete_power);

	for (i = 0; i < count; i++)
	{
		if (delete_power == power[i])
		{
			// 记录下当前的下标
			delete_index = i;
			break ;     // 找到了要删除的战力值，直接跳出循环，提升效率
		}
	}

	// 根据判断（是否找到），执行后续的操作
	if (-1 == delete_index)
	{
		printf("很遗憾，没有找到要删除的战力值，删除失败！\n");
	}
	else
	{
		// 从下标开始，后面一个覆盖前面一个数字
		for (i = delete_index; i < count - 1; i++)
		{
			power[i] = power[i + 1];
		}
		// 删除完毕后，一定记得数组的总长度-1  障眼法要做到底
		count--;
	}

	printf("删除后的结果为:\n");
	for (i = 0; i < count; i++)
	{
		printf("%.2lf\t", power[i]);
	}

	// 删除之后进行插入
	// 注意！如果删除失败将无法添加新的值，因为数组总长度为5
	printf("\n请输入新战力值：");
	scanf("%lf", &insert_power);
	power[count] = insert_power;   // 注意进行理解
	// 插入操作完毕后，记得数组总长度+1
	count++;

	printf("插入后的结果为：\n");
	for (i = 0; i < count; i++)
	{
		printf("%.2lf\t", power[i]);
	}

	// 如果想让战力值数组有序，直接使用冒泡排序即可

	return (0);
}
