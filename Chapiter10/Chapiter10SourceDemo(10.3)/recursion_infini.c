#include <stdio.h>
#include <stdlib.h>

int num = 0;  // 全局变量

void recursion_infini(void)
{
	// 由于该递归函数没有结束条件，所以会无限执行下去

	printf("%d\n", num++);  // 打印完之后num++
	recursion_infini();     // 自己调用自己 - 递归
}

int main(void)
{
	// 调用无限递归
	recursion_infini();

	return (0);
}
