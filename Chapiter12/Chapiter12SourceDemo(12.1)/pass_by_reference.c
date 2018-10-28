#include <stdio.h>
#include <stdlib.h>

/** 接收num变量的地址，并将该地址指向的值加一 */
void change(int *num)
{
	// 这里的num和main中的num是同一个
	// 所以这里的加一会影响main中的num
	*num += 1;
}

int main(void)
{
	int num = 9;
	change(&num);  // 调用函数
	printf("num = %d\n", num);  // 结果为10

	return (0);
}
