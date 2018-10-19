#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 计算某个函数被调用了多少次

	int count = 0;
	counter();
	counter();
	counter();
	count = counter();  // 第四次调用
	printf("count = %d\n", count); // 结果为4

	return (0);
}
