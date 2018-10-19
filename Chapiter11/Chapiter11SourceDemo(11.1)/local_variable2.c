#include <stdio.h>
#include <stdlib.h>

int *get_nums(void)
{
	// nums局部变量
	int nums[] = {1, 2, 3, 4, 5};

	// 函数执行完毕时，会自动销毁函数内部定义的变量
	return (nums);
}

int main(void)
{
	int *nums = get_nums();
	int i = 0;

	for (i = 0; i < 5; i++)
	{
		printf("%d\n",*(nums+i)); // 打印结果不为get_nums中的nums的值
	}

	return (0);
}
