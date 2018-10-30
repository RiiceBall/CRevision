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
#include <time.h>
#include <unistd.h>
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

/** 门派结构 */
typedef struct _martial {
	int id;               // 门派编号
	char name[50];        // 门派名称
	char type[50];        // 门派类型 - 正邪
	COORD hq_coord;       // 总舵坐标
	int is_open;          // 门派是否开放
	char desc[1000];      // 门派描述
}Martial;

/** 玩家结构 */
typedef struct _player {
	int id;               // 玩家编号
	char name[50];        // 玩家名称
	char pass[50];        // 玩家密码
	int life;             // 玩家生命值
	int level;            // 玩家等级
	int exp;              // 玩家经验值
	int hp;               // 玩家血量
	int mp;               // 玩家内力值
	int mp_max;           // 当前级别玩家最大内力值
	int gold;             // 玩家金币数
	Martial martial;      // 玩家的门派
	COORD coord;          // 玩家当前所在地图的坐标
	Prop weapon;          // 玩家装备的武器
	Prop armor;           // 玩家装备的防具
	// 玩家的背包（暂未实现）
}Player;

/** 怪物结构 */
typedef struct _monster {
	int id;               // 怪物编号
	char name[50];        // 怪物名称
	int level;            // 怪物等级
	int hp;               // 怪物血量
	int att;              // 怪物攻击力
	int deff;             // 怪物防御力
	int min_money;        // 杀死怪物后掉落的最少金币
	int max_money;        // 杀死怪物后掉落的最多金币
	int exp;              // 杀死怪物后玩家获得的经验值
	// 拓展：杀死怪物后，玩家可以获得的道具列表
	int state;            // 怪物当前的状态，0表示怪物已死，非0表示怪物活着
	COORD coord;          // 怪物的坐标
}Monster;

void init(void);          // 初始化游戏数据
void show(void);          // 显示全局数据

/** 显示游戏欢迎信息 */
void show_welcome(void);

/** 显示游戏地图 */
void show_map(void);

/** 在信息界面显示当前地图的信息 */
void show_map_info(void);

/** 显示游戏地图下方的游戏信息 */
void show_information(void);

/** 显示游戏主菜单 */
void show_main_menu(void);

/** 在信息界面显示玩家的个人资料 */
void show_player_info(void);

/** 在信息界面显示当前地图的怪物 */
void show_monsters(void);

/** 处理游戏主菜单的业务 */
void process_main_menu(char key);

/** pk怪物的方法 */
void fight(int monster_id);

/** 瞬间移动到制定坐标 */
void teleport(int x, int y);

#endif // GAME_H_INCLUDED
