#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 求1-100之间的偶数和
	// 循环累加
	// 判断是否为偶数；模2是否为0
	// 如果为奇数就跳过，如果为偶数则执行累加

	int i;         // 循环变量
	int sum = 0;   // 偶数和

	for (i = 0; i < 100; i++)
	{
		if (i % 2 != 0)   // 奇数的情况
			continue ;    // 跳过奇数的情况
		sum += i;
	}
	printf("%d", sum);

	return (0);
}
