#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int temp;    // 临时变量
	int num = 123456789;    // 要取出每一位数的数字

	// 规律：除10在模10
	while (num > 0)
	{
		printf("%d\n", num % 10);
		num /= 10;	// 取出个位数字后，立即去掉个位数字
	}

	return 0;
}
