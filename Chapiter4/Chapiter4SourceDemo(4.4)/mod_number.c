#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num = 1234;

	// 将4位数的每一位都取出来
	printf("个位：%d\n", num % 10);
	printf("十位：%d\n", num / 10 % 10);
	printf("百位：%d\n", num / 100 % 10);
	printf("千位：%d\n", num / 1000 % 10);

	return (0);
}
