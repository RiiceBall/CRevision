#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float width = 2.5f;     // 宽
	float height = 4.0f;    // 高
	float surface = width * height; // 计算面积

	// 显示float需要用%f
	// %.2f代表显示浮点型变量时，只显示小数点后两位
	printf("长方形的面积是：%.2f\n", surface);

	return (0);
}
