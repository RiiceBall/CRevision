#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 关键字const代表常量，通常变量名为大写
	const int NUM_TEST = 100;  // 常量 不能被修改的量
	// NUM_TEST++;             // 如果修改常量会报错

	const int N = 20;
	int i;

	// 利用常量来定义循环次数
	for (i = 0; i < N; i++)
	{
		printf("再别康桥\n");
	}


	return (0);
}
