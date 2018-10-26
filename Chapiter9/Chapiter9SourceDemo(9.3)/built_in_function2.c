#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	// ceil - 进一法  floor - 去尾法
	// 如果是负数，则规律相反

	printf("%.2lf\n", ceil(98.01));
	printf("%.2lf\n", floor(98.90));
	// 以下为负数情况
	printf("%.2lf\n", ceil(-98.01));
	printf("%.2lf\n", floor(-98.90));

	printf("%.2lf\n", sqrt(9));   // 求平方根
	printf("%.2lf\n", pow(5,4));  // 求第一个数字的第二个数字次幂
	printf("%d\n", abs(-98));     // 求绝对值

	return (0);
}
