#include <stdio.h>
#include <stdlib.h>

/*
圆： s = PI * r * r;
矩形：s = width * height;
三角形：s = width * height / 2;
*/

// 根据传入的半径，返回圆的面积
double calc_circle(double radius);

// 对用户的输入进行非负验证/让用户输入正确的值/拿到用户输入的正确值
int validate(double num);  // 验证输入的num是否为正数
// 或者使用下面的方法
// double input(void);     // 函数内直接让用户输入，如果不符合要求就重新输入，返回正确数字

// 根据传入的矩形宽和高，返回矩形的面积
double calc_rectangle(double width, double height);

int main(void)
{
	// 思考：在本案例中，那些功能是比较通用的？是可以书写成函数多次调用的？
	// 1、用户输入的必须是正数
	// 2、打印面积
	double radius;         // 用户输入的半径
	double width, height;  // 图形的宽和高
	double s;              // 图形的面积
	int choice;            // 用户的选择

	printf("1、圆\n");
	printf("2、矩形\n");
	printf("3、三角形\n");
	printf("本系统支持计算三种图形的面积，情选择：\n");
	scanf("%d", &choice);

	// 根据用户选择来进行不同的计算
	switch (choice)
	{
		case 1:  // 圆形
			printf("请输入圆半径，我来计算圆的面积：");
			do
			{
				scanf("%lf", &radius);  // 录入

				// 如果没有通过验证，就打印一句提示
				if (!validate(radius))
				{
					printf("所录入的内容不能为负数，请重新输入一个正数：");
				}
			} while (!validate(radius));  // 当验证不通过的时候，重新录入
			s = calc_circle(radius);  // 调用计算圆面积的方法
			break ;

		case 2:  // 矩形
			printf("请输入矩形的宽和高，我来计算矩形的面积：");
			do
			{
				scanf("%lf%lf", &width, &height);

				// 如果没有通过验证，就打印一句提示
				if(!validate(width) || !validate(height))
				{
					printf("所录入的内容不能为负数，请重新输入两个正数：");
				}
			} while (!validate(width) || !validate(height)); // 当验证不通过时，请重新输入

			//验证通过之后在调用方法
			s = calc_rectangle(width,height);
			break ;

		case 3:  // 三角形
			s = 0;  // 把s设置为0
			printf("三角形请自行实现！\n");
			break ;

		default:
			printf("本系统只支持三种图形，请在1~3之间选择！");
	}

	printf("图形的面积为：%.2lf\n", s);

	// 在函数中实现的是各图形的计算过程


	return (0);
}

// 根据传入的半径，返回圆的面积
double calc_circle(double radius)
{
	// pow函数可以自己定义

	// 计算圆的面积
	double s = 3.14 * pow(radius, 2);

	// 返回计算好的面积
	return (s);
}

// 验证输入的num是否为正数
int validate(double num)
{
	return (num > 0);  // 如果num > 0，会返回一个非零值，表示真
}

// 根据传入的矩形宽和高，返回矩形的面积
double calc_rectangle(double width, double height)
{
	return (width * height);  // 返回面积
}
