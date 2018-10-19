#include <stdio.h>
#include <stdlib.h>

void change_num(void)
{
	// 局部变量，不是main中的num1和num2
	int num1 = 5, num2 = 8;
	num1 = 155;
	num2 = 288;
}

int main(void)
{
	int num1 = 5, num2 = 8;

	change_num(); // 调用函数
	printf("num1 = %d\tnum2 = %d\n",num1,num2); // 打印5和8而不是155和288

	return (0);
}
