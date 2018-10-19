#include <stdio.h>
#include <stdlib.h>

int count;  //全局变量 - 有默认值（0）

void add(void)
{
	count++;
}

int main(void)
{
	// 调用两次add后，count的结果为2
	add();
	add();
	printf("count = %d\n", count);

	return (0);
}
