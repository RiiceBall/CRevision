#include <stdio.h>
#include <stdlib.h>
#include "game.h"
#include "game_lib.h"

int main(void)
{
	// 设置窗口标题
	set_title("笑傲江湖之精忠报国 - 老九C语言版");

	// 设置淡绿色黑底的文字颜色
	set_color(10, 0);

	// 打印游戏欢迎信息
	show_welcome();

	return (0);
}
