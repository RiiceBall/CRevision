#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1 = 99;
	{ //代码块-域
		int num2=199;
		printf("%d\n", num1 + num2);
	}
	printf("%d\n", num1 + num2); // 报错，因为在这里num2未定义

	return (0);
}
