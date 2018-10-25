#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;  // 循环变量

	i = 0;         // 初始化变量
	while (i < 9)  // 退出条件
	{
		printf("第%d次while循环。\n", i);  // 循环语句
		i++;       // 递增变量
	}

	// 初始化变量、退出条件和递增变量
	for (i = 0; i < 9; i++)
	{
		printf("第%d次for循环。\n", i);    // 循环语句
	}

	// 以上两个循环代码效果一样

	return (0);
}
