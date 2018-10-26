#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 函数原型
// 如果函数写在main之上可以省略函数原型
// 如果函数写在main之下必须写上函数原型
void calc_circle(void);
void calc_rectangle(void);
int cal_sum(void);

/** 计算圆的面积（函数实现） */
void calc_circle(void)
{
	double radius, s;  // 半径和面积

	printf("请输入圆的半径：");
	scanf("%lf", &radius);

	// 圆的面积=3.14乘以半径的平方
	s = 3.14 * pow(radius, 2);
	printf("半径为：%.2lf的圆面积为：%.2lf\n", radius, s);
}

/** 计算矩形的面积（函数实现） */
void calc_rectangle(void)
{
	double width, height;  // 矩形的宽和高
	double s;              // 矩形的面积

	printf("请输入矩形的宽和高：");
	scanf("%lf%lf", &width, &height);

	if (width <= 0 || height <= 0)
	{
		printf("宽和高不能为负数，你耍我呢？？\n");
		return ;
		// return会立即终止函数并返回，可返回空值
	}
	s = width * height;
	printf("矩形的面积为：%.2lf\n", s);
}

/** 计算1-100之间的偶数和，并返回结果 */
int cal_sum(void)
{
	int sum = 0;
	int i = 1;

	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)
		sum += i;
	}

	// 将计算好的结果返回
	return (sum);
}

int main(void)
{
	// 误区：不要一开始就考虑如何完成某个功能
	// 书写函数的步骤：完成函数三要素
	// 1、需要返回值吗？
	// 2、函数名是什么？
	// 3、需要给这个函数参数吗？

	calc_circle();       // 调用计算圆面积的函数
	calc_rectangle();    // 调用计算矩形面积的函数

	// 如果函数有返回值，那么调用的时候，记得到使用对应类型的变量来接收！
	int sum = cal_sum();
	printf("1-100之间的偶数和为：%d\n", sum);

	return (0);
}
