#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 使用循环计算1-100的累加和

	// 需要循环变量
	int i = 1;
	// 需要累加和变量，用来存放每次相加的值
	int sum = 0;

	while (i < 101)
	{
		// 每次循环累加本循环的数字
		sum = sum + i;  // sum += 1;
		// 循环变量的更新
		i = i + 1;      // i++;
	}

	printf("1-100的累加结果为：%d\n", sum);

	return (0);
}
