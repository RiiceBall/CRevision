// 对应hotel.h的实现文件

// 使用<>时，会查找系统目录
#include <stdio.h>
#include <stdlib.h>
// 包含自定义头文件时，使用双引号
// 使用双引号时，查找当前目录
#include "hotel.h"

// 酒店名称
char hotel_names[4][50] = {
    "贝罗酒店", "香榭丽舍广场酒店", "阿斯图里亚斯特拉奥佩拉酒店", "斯克里布索菲特酒店"
};

/** 菜单函数 */
int menu(void)
{
	int choice; // 用户的选择
	int i;      // 循环变量

	printf("请选择入住的酒店：\n");
	for (i = 0; i < 4; i++)
	{
		printf("%d、%s\n", i + 1, hotel_names[i]);
	}
	printf("5、退出程序\n");
	printf("请输入您的选择：");
	scanf("%d", &choice);
	// 1、用户的选择不能是非数字
	// 2、用户必须输入1-5之间

	return (choice);
}
