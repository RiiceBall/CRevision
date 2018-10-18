#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double radius = 2.5;    // 半径
	double area = 3.141592653 * radius * radius;    // 面积

	// 显示double需要用%lf
	// 如果希望小数点后面只显示两位数，可用%.2lf
	printf("圆的半径为%lf，面积为%lf\n", radius, area);

	return (0);
}
