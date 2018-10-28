#include <stdio.h>
#include <stdlib.h>
#include "hotel.h"

// 使用其他文件中的全局变量
extern char hotel_names[4][50];

int main(void)
{
	// 用户输入入住酒店和天数，程序计算出对应的金额

	int choice;         // 用户的选择
	int nights;         // 用户入住的天数
	double curr_cost;   // 用户当前入住酒店的房费单价

	while ((choice = Menu()) != 5)
	{
		switch (choice)
		{
			case 1:  // 用户入住第一家酒店
				curr_cost = HOTAL1;
				break ;
			case 2:  // 用户入住第二家酒店
				curr_cost = HOTAL2;
				break ;
			case 3:  // 用户入住第三家酒店
				curr_cost = HOTAL3;
				break ;
			case 4:  // 用户入住第四家酒店
				curr_cost = HOTAL4;
				break ;
			default:
				curr_cost = 0;
		}

		// 得到用户入住的天数
		nights = Get_nights();

		// 计算总费用
		Show_price(nights, curr_cost);
	}
	printf("感谢使用本系统，再会！\n");

	return (0);
}
