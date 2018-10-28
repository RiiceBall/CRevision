#include <stdio.h>
#include <stdlib.h>

int count = 0;  // 全局变量

// 查找某个值的在数组中的下标
int find_index(int *, int);

int main(void)
{
	int nums[] = {1, 2, 34, 44, 55, 3};
	int searchNum;  // 要查找的数字

	count = sizeof(nums) / sizeof(nums[0]);  // 获取数组长度
	printf("请输入要查找的数字：");
	scanf("%d", &searchNum);

	// 调用函数并获取下标
	int index = find_index(nums, searchNum);
	printf("所查找数字的下标：%d\n", index);

	return (0);
}

/** 查找下标，没找到返回-1 */
int find_index(int *p, int num)
{
	int index = -1, i = 0;  // 定义下标和循环变量

	// 循环查找，如果找到就保存下标
	for (; i < count; i++)
	{
		if (*(p + i) == num)
		{
			index = i;
			break ;
		}
	}

	// 如果没有找到，那么index的值为-1
	return (index);
}
