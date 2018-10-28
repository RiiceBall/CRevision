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
int Menu(void)
{
	int choice; // 用户的选择
	int result; // 用户输入后的结果判断 0 表示非法，1表示真
	int i;      // 循环变量

	printf("请选择入住的酒店：\n");
	for (i = 0; i < 4; i++)
	{
		printf("%d、%s\n", i + 1, hotel_names[i]);
	}
	printf("5、退出程序\n");
	printf("请输入您的选择：");

	// 当用户输入的值不合法时，要求重新输入，当输入没问题时scanf会返回1
	while((result = scanf("%d", &choice)) != 1 || choice < 1 || choice > 5)
	{
		if(result != 1)     // 如果用户输入的不是数字类型
		{
			scanf("%*s");   // 用来处理非整数的输入。*表示输入项在读入后不赋值给对应的变量
			fflush(stdin);  // 清空缓冲区
			// 以上两句效果相同
		}
		printf("必须输入1-5之间的整数：");
	}

	return (choice);
}

/** 返回用户预定的天数 */
int Get_nights(void)
{
	int nights;  // 用户入住的天数

	printf("先生/女士，请输入要入住的天数：");
	while(scanf("%d", &nights) != 1)
	{
		scanf("%*s");  // 取消赋值
		printf("请输入正确的天数，必须是整数！\n");
		printf("先生/女士，请输入要入住的天数：");
	}
	return (nights);
}

/** 显示总金额 */
void Show_price(int nights, double price)
{
	// 总价格=累加前一天的95%
	double total = 0;
	int i;

	for (i = 0; i < nights; i++)
	{
		total += price;
		price = price * DISCOUNT;  // 0.95
	}
	printf("入住%d天，共花费：￥%.2lf\n", nights, total);
}
