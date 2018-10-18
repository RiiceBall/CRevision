#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 一元运算符为++和--

	int num = 5;
	int result = num++;     // 等价 result = num; num++;
	printf("result = %d\n", result);

	int num = 2;
	int result = --num;     // 等价 result = num; num++;
	printf("result = %d\n", result);

	return (0);
}
