#include <stdio.h>
#include <stdlib.h>

// 书写函数实现数组元素的查找，要求返回找到的元素下标
int search(void);

// 书写函数实现冒泡排序并返回排序后的数组
// 未实现
// double[] sort(void);

// 书写函数要求用户输入密码（6位，错误则重新输入），返回并打印用户输入的正确密码
// 未实现
// char *password(void);

int main(void)
{
	int index = search();  // 调用函数并保存返回值
	printf("找到元素下标是：%d\n",index);

	return (0);
}

/** 数组元素的查找，要求返回找到的元素下标 */
int search(void)
{
	int nums[] = {34, 56, 78, 3, 2};
	int i;
	int search_num, search_index = -1;
	// 要查找的数字，所查找的数字的下标，没找到index为-1

	printf("请输入要查找整型数字：");
	scanf("%d", &search_num);

	for (i = 0; i < 5; i++)
	{
		if (search_num == *(nums + i))
		{
			search_index = i;  // 记录下标
			break ;
		}
	}

	// 返回查找到的元素下标
	return (search_index);
}
