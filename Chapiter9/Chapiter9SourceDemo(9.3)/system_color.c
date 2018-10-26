#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 颜色属性
	/*
		颜色属性有两个十六进制的数字指定，第一个为背景色，第二个为前景色，
		每个数字可以为下列的值之一：
		黑色 - 0  蓝色 - 1  绿色 - 2  湖蓝色 - 3
		红色 - 4  紫色 - 5  黄色 - 6  白色 - 7
		灰色 - 8  淡蓝色 - 9  淡绿色 - A  淡红色 - C
		淡紫色 - D  淡黄色 - E  亮白色 - F
	*/

	// 将背景设置为灰色，文字颜色为淡黄色
	system("color 8E");
	int a = 0;
	printf("%d\n", a);

	return (0);
}
