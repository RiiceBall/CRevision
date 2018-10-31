#include "game_lib.h"

/** 设置控制台窗口的标题 */
void set_title(char *title)
{
	// windows库中的函数
	SetConsoleTitle(title);
}

/** 设置文字的前景色和背景色 */
/*  0-黑色，1-蓝色，  2-绿色，   3,-浅绿色，  4-红色，   5-紫色，   6-黄色，   7-白色，
 *  8-灰色，9-淡蓝色，10-淡绿色，11-淡浅绿色，12-淡红色，13-淡紫色，14-淡黄色，15-亮白色
 */
void set_color(int fore_color, int back_color)
{
	HANDLE win_handle;  // 句柄

	// 获取控制台窗口
	win_handle = GetStdHandle(STD_OUTPUT_HANDLE);

	// 设置文字颜色
	SetConsoleTextAttribute(win_handle, fore_color + back_color * 0x10);
}

/** 设置光标的位置 */
void set_cursor_position(int x, int y)
{
	HANDLE win_handle;  // 句柄
	COORD pos = {x, y}; // 将x，y保存到COORD数据结构中

	// 获取控制台窗口
	win_handle = GetStdHandle(STD_OUTPUT_HANDLE);

	// 设置光标的坐标
	SetConsoleCursorPosition(win_handle, pos);
}

/** 从x、y坐标开始，清理row_count行 */
void clear_info(int x, int y, int row_count)
{
	int i, j;

	// 每行清楚78个字符 - 打印78个空格
	for (i = 0; i < row_count; i++)
	{
		// 移动光标到每一行的开头
		set_cursor_position(x + 1, y + i);
		for (j = 0; j < 76; j++)
		{
			printf(" ");
		}
	}
}
