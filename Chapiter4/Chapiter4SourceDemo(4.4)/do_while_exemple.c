#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 分析下面的C语言代码
	int a = 1, b = 10;

	// 执行至少一次
	do {
		b -= a;
		a++;
	}while (b-- < 0);

	printf("执行循环后b的值为%d。\n", b);

	return (0);
}
