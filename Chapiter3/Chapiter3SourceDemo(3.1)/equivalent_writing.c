#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 定义一个整型
	int num = 10;

	--num;      // num--;   num = num - 1   等价写法
	num++;      // num = num + 1;   等价写法
	num += 5;   // num = num + 5;   等价写法
	printf("%d\n", num);

	return (0);
}
