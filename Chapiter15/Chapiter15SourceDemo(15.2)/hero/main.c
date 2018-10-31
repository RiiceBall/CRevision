#include <stdio.h>
#include <stdlib.h>
#include "hero.h"

// 引用hero.c文件中的heros全局变量
extern Hero heros[100];

int main(void)
{
	// 调用录入函数
	input();

	// 调用打印函数
	show();

	// 显示英雄平均值
	show_avg();

	return (0);
}
