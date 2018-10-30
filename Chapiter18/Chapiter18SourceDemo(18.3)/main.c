#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "game.h"
#include "game_lib.h"

int main(void)
{
	char key;   // 接收到的用户按键

	// 假设用户初始的坐标是3，2
	X = 3, Y = 2;

	// 设置窗口标题
	set_title("笑傲江湖之精忠报国 - 老九C语言版");

	// 设置淡绿色黑底的文字颜色
	set_color(10, 0);

	// 打印游戏欢迎信息
	show_welcome();

	// 打印游戏地图
	show_map();

	// 打印信息
	show_information();

	// 打印菜单
	show_main_menu();

	// 游戏循环
	while (1)
	{
		key = getch();  // 和getchar用法一样，不过不需要按回车就会接收

		// 判断key的值
		// 根据电脑的不同键位的值可能不同
		// 如果想知道某个键位的值可以打印key的%d
		// 上下左右键的值可以为：
		// 上：38/VK_UP 或者 72
		// 右：39/VK_RIGHT 或者 77
		// 下：40/VK_DOWN 或者 80
		// 左：37/VK_LEFT 或者 75
		if (key >= '1' && key <= '5')
		{
			printf("1~5之间的游戏菜单");
		}
		else if (key == 72 || key == 38) // 上
		{
			// 向上
			Y--;
		}
		else if (key == 77 || key == 39) // 右
		{
			// 向右
			X++;
		}
		else if (key == 80 || key == 40) // 下
		{
			// 向下
			Y++;
		}
		else if (key == 75 || key == 37) // 左
		{
			// 向左
			X--;
		}
		// 如果超出地图则出现在另一边
		if (X > 7) X = 0;
		if (X < 0) X = 7;
		if (Y > 7) Y = 0;
		if (Y < 0) Y = 7;
		show_map();  // 重新显示地图
	}

	return (0);
}
