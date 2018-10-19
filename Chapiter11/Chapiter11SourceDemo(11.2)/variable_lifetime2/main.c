#include <stdio.h>
#include <stdlib.h>

// 全局变量的作用域:当前源文件
int while_count = 0; // 全局变量，用来记while循环执行次数

int main(void)
{
	int value;       // 自动变量
	register int i;  // 将循环变量设置为寄存器存储模式

	printf("请输入循环执行的次数(按0退出):");
	// 用户输入的value为整型数字并且值大于0时，进入循环
	while (scanf("%d", &value) == 1 && value > 0)  // 实现一个循环录入的效果
	{
		while_count++;  // 轮数++
		for (i = value; i >= 0; i--) // for循环会被执行value+1次
		{
			// 1、我们想知道循环执行了多少次
			// 2、我们还想知道，counter函数被调用了多少次
			counter(i);  // 每次循环调用counter函数
		}
		printf("请输入循环执行的次数（按0退出）:");
	}

	return (0);
}
