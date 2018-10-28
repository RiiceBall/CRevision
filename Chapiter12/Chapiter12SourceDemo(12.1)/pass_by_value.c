#include <stdio.h>
#include <stdlib.h>

/** 接收num变量的值，并++ */
void change(int num)
{
	// 这里接收的其实是main里num变量的副本
	// 所以修改这里的num对main里的num没有影响
	num++;
}

int main(void)
{
	int num = 9;

	change(num);   // 调用函数
	printf("num = %d\n", num);  // 结果还是9

	return (0);
}
