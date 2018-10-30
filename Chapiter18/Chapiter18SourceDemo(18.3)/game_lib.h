#ifndef GAME_LIB_H_INCLUDED
#define GAME_LIB_H_INCLUDED

/*******************************************************
 * 文件名：game_lib.h
 * 描  述：用来定义游戏中常用的系统操作
 * （更改文字颜色，清屏等）
 * 创建人：老九学堂会员4.0·饭团
 * 日  期：2018-10-29
 * 版  本：1.0
 * 官  网：http://www.xuetang9.com
 * 官方QQ：614940318（老九君）
 ******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/** 设置控制台窗口的标题 */
void set_title(char *title);

/** 设置文字的前景色和背景色 */
/*  0-黑色，1-蓝色，  2-绿色，   3,-浅绿色，  4-红色，   5-紫色，   6-黄色，   7-白色，
 *  8-灰色，9-淡蓝色，10-淡绿色，11-淡浅绿色，12-淡红色，13-淡紫色，14-淡黄色，15-亮白色
 */
void set_color(int fore_color, int back_color);

/** 设置光标的位置 */
void set_cursor_position(int x, int y);

#endif // GAME_LIB_H_INCLUDED
