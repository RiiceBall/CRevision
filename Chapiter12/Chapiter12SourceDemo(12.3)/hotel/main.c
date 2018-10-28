#include <stdio.h>
#include <stdlib.h>
#include "hotel.h"

// 使用其他文件中的全局变量
extern char hotel_names[4][50];

int main(void)
{
	// 用户输入入住酒店和天数，程序计算出对应的金额

	int choice; // 用户的选择

	// 1、显示菜单 - 封装成函数
	choice = menu();

	// 检查选择是否是1~4
	if (choice > 0 && choice < 5)
	{
		printf("当前用户选择的是%s\n", hotel_names[choice - 1]);
	}

	// 2、计算过程

	return (0);
}
