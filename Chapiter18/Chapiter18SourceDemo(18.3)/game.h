#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

/*******************************************************
 * 文件名：game.h
 * 描  述：用来定义游戏的一些核心结构和函数
 * 创建人：老九学堂会员4.0·饭团
 * 日  期：2018-10-29
 * 版  本：1.0
 * 官  网：http://www.xuetang9.com
 * 官方QQ：614940318（老九君）
 ******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

/***************** 游戏的结构类型定义 *****************/
// 声明全局坐标变量（X，Y）
int X, Y;

// 玩家、地图、装备、怪物

/** 游戏地图结构 - 编号、名称、玩家的进入等级、坐标、介绍 */
typedef struct _map {
	int id;               // 地图编号
	char name[50];        // 地图名称
	int min_level;        // 玩家进入的最低等级
	// 坐标结构COORD
	COORD coord;          // 地图的坐标
	char desc[500];       // 地图介绍
}Map;

/** 游戏道具类型枚举 - 武器、防具、消耗品、卡片、碎片 */
typedef enum _proptype {
	weapon, armor, consumables, card, fragment
}Proptype;

/** 游戏道具（玩家背包） - 武器、防具、消耗品，卡片和碎片未实现 */
typedef struct _prop {
	int id;               // 道具编号
	char name[50];        // 道具名称
	int level;            // 道具级别
	int stock;            // 道具库存或玩家背包中的叠加数量
	double price;         // 道具单价
	Proptype type;        // 道具类型
	union {               // 联合 - 多选一
		int min_attack;   // 如果是武器，就对应最小攻击力
		int min_defense;  // 如果是防具，就对应最小防御力
		int min_power;    // 如果是消耗品，就对应它的最小能量值（血瓶对应血量等等）
	};
	union {               // 联合 - 多选一
		int max_attack;   // 如果是武器，就对应最大攻击力
		int max_defense;  // 如果是防具，就对应最大防御力
		int max_power;    // 如果是消耗品，就对应它的最大能量值（血瓶对应血量等等）
	};
	char desc[200];       // 道具功能描述
}Prop;

void init(void);          // 初始化游戏数据
void show(void);          // 显示全局数据

/** 显示游戏欢迎信息 */
void show_welcome(void);

/** 显示游戏地图 */
void show_map(void);

/** 显示游戏地图下方的游戏信息 */
void show_information(void);

/** 显示游戏主菜单 */
void show_main_menu(void);

#endif // GAME_H_INCLUDED
