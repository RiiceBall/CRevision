#include "game.h"

// 定义分隔符常量（78个-）
#define SEP "------------------------------------------------------------------------------"

#define COL 78               // 游戏界面总宽度
#define MARGIN_X 10          // 左边距
#define MAP_START_Y 3        // 地图开始的Y坐标
#define MAP_END_Y 11         // 地图结束的Y坐标
#define INFO_START_Y 12      // 信息开始的Y坐标
#define INFO_END_Y 19        // 信息结束的Y坐标
#define MAINMENU_START_Y 20  // 主菜单开始的Y坐标

// 定义道具数组
Prop prop_array[] = {
	{1, "帝皇天烈剑", 1, 5, 5000, weapon, .min_attack=1, .max_attack=4, "上古三皇五帝用过的宝剑！"},
	{2, "荆棘之甲", 2, 5, 10000, armor, .min_defense=2, .max_defense=6, "取日月之精华，反弹伤害！"},
	{3, "玉液琼浆", 3, 5, 15000, consumables, .min_power=100, .max_power=500, "蟠桃会上的御用饮品，玉母娘娘都说好！"}
};

// 定义地图数组 - 64张地图
Map map_array[8][8] = {
	{
		{1, "天山", 1, {0, 0}, "这里充满了西域文化！"}, {2, "楼兰", 1, {0, 0}, "这里充满了西域文化！"},
		{3, "白驼山", 1, {0, 0}, "这里充满了西域文化！"}, {4, "野猪林", 1, {0, 0}, "这里充满了西域文化！"},
		{5, "水晶洞", 1, {0, 0}, "这里充满了西域文化！"}, {6, "天蚕洞", 1, {0, 0}, "这里充满了西域文化！"},
		{7, "黑风寨", 1, {0, 0}, "这里充满了西域文化！"}, {8, "冰火岛", 1, {0, 0}, "这里充满了西域文化！"}
	},
	{
		{9, "迷宫", 1, {0, 0}, "这里充满了西域文化！"}, {10, "凌霄城", 1, {0, 0}, "这里充满了西域文化！"},
		{11, "轩辕岭", 1, {0, 0}, "这里充满了西域文化！"}, {12, "华山", 1, {0, 0}, "这里充满了西域文化！"},
		{13, "嵩山", 1, {0, 0}, "这里充满了西域文化！"}, {14, "紫禁城", 1, {0, 0}, "这里充满了西域文化！"},
		{15, "快活林", 1, {0, 0}, "这里充满了西域文化！"}, {16, "神龙岛", 1, {0, 0}, "这里充满了西域文化！"}
	},
	{
		{17, "西城", 1, {0, 0}, "这里充满了西域文化！"}, {18, "葫芦谷", 1, {0, 0}, "这里充满了西域文化！"},
		{19, "唐门", 1, {0, 0}, "这里充满了西域文化！"}, {20, "终南山", 1, {0, 0}, "这里充满了西域文化！"},
		{21, "石窟", 1, {0, 0}, "这里充满了西域文化！"}, {22, "客栈", 1, {0, 0}, "这里充满了西域文化！"},
		{23, "玉皇顶", 1, {0, 0}, "这里充满了西域文化！"}, {24, "灵蛇岛", 1, {0, 0}, "这里充满了西域文化！"}
	},
	{
		{25, "光明顶", 1, {0, 0}, "这里充满了西域文化！"}, {26, "摩天崖", 1, {0, 0}, "这里充满了西域文化！"},
		{27, "聚贤庄", 1, {0, 0}, "这里充满了西域文化！"}, {28, "后山", 1, {0, 0}, "这里充满了西域文化！"},
		{29, "武当山", 1, {0, 0}, "这里充满了西域文化！"}, {30, "开封府", 1, {0, 0}, "这里充满了西域文化！"},
		{31, "二十四桥", 1, {0, 0}, "这里充满了西域文化！"}, {32, "蓬莱仙境", 1, {0, 0}, "这里充满了西域文化！"}
	},
	{
		{33, "擂鼓山", 1, {0, 0}, "这里充满了西域文化！"}, {34, "峨眉山", 1, {0, 0}, "这里充满了西域文化！"},
		{35, "迷踪林", 1, {0, 0}, "这里充满了西域文化！"}, {36, "五虎岭", 1, {0, 0}, "这里充满了西域文化！"},
		{37, "天宁寺", 1, {0, 0}, "这里充满了西域文化！"}, {38, "积善堂", 1, {0, 0}, "这里充满了西域文化！"},
		{39, "镇江府", 1, {0, 0}, "这里充满了西域文化！"}, {40, "桃花岛", 1, {0, 0}, "这里充满了西域文化！"}
	},
	{
		{41, "恶人谷", 1, {0, 0}, "这里充满了西域文化！"}, {42, "大理", 1, {0, 0}, "这里充满了西域文化！"},
		{43, "百花谷", 1, {0, 0}, "这里充满了西域文化！"}, {44, "孔雀山庄", 1, {0, 0}, "这里充满了西域文化！"},
		{45, "五霸岗", 1, {0, 0}, "这里充满了西域文化！"}, {46, "万仞堂", 1, {0, 0}, "这里充满了西域文化！"},
		{47, "千年古刹", 1, {0, 0}, "这里充满了西域文化！"}, {48, "六合塔", 1, {0, 0}, "这里充满了西域文化！"}
	},
	{
		{49, "玩偶山庄", 1, {0, 0}, "这里充满了西域文化！"}, {50, "黑木崖", 1, {0, 0}, "这里充满了西域文化！"},
		{51, "蝴蝶谷", 1, {0, 0}, "这里充满了西域文化！"}, {52, "铁花堡", 1, {0, 0}, "这里充满了西域文化！"},
		{53, "霹雳堂", 1, {0, 0}, "这里充满了西域文化！"}, {54, "关帝庙", 1, {0, 0}, "这里充满了西域文化！"},
		{55, "麒麟庄", 1, {0, 0}, "这里充满了西域文化！"}, {56, "销魂宫", 1, {0, 0}, "这里充满了西域文化！"}
	},
	{
		{57, "石府", 1, {0, 0}, "这里充满了西域文化！"}, {58, "金三角", 1, {0, 0}, "这里充满了西域文化！"},
		{59, "忏悔崖", 1, {0, 0}, "这里充满了西域文化！"}, {60, "通吃岛", 1, {0, 0}, "这里充满了西域文化！"},
		{61, "通天观", 1, {0, 0}, "这里充满了西域文化！"}, {62, "紫霞亭", 1, {0, 0}, "这里充满了西域文化！"},
		{63, "天弃庵", 1, {0, 0}, "这里充满了西域文化！"}, {64, "侠客岛", 1, {0, 0}, "这里充满了西域文化！"}
	}
};

/** 初始化游戏数据 */
void init(void)
{

}

/** 显示全局数据 */
void show(void)
{
	// 获取道具数组的大小
	int prop_count = sizeof(prop_array) / sizeof(Prop);
	int i, j;

	// 打印道具数组信息
	printf("编号\t名称\t\t价格\n");
	for (i = 0; i < prop_count; i++)
	{
		printf("%d\t%s\t%.0lf\n", prop_array[i].id, prop_array[i].name, prop_array[i].price);

		// 根据道具类型打印
		switch (prop_array[i].type)
		{
			case weapon:       // 武器类型
				printf("最小攻击力：%d\t最大攻击力：%d\n", prop_array[i].min_attack, prop_array[i].max_attack);
				break ;
			case armor:        // 防具类型
				printf("最小防御力：%d\t最大防御力：%d\n", prop_array[i].min_defense, prop_array[i].max_defense);
				break ;
			case consumables:  // 消耗品类型
				printf("最小能量值：%d\t最大能量值：%d\n", prop_array[i].min_power, prop_array[i].max_power);
				break ;
		}
	}

	printf("\n打印地图信息：\n");
	// 外部循环控制行
	for (i = 0; i < 8; i++)
	{
		// 内部循环控制列
		for (j = 0; j < 8; j++)
		{
			printf("%-10s", map_array[i][j].name);
		}
		printf("\n");
	}
}

/** 显示游戏欢迎信息 */
void show_welcome(void)
{
	// 在第0行的第MARGIN_X开始打印
	set_cursor_position(MARGIN_X, 0);
	printf("%s", SEP);

	// 在第1行的第MARGIN_X开始打印
	set_cursor_position(MARGIN_X, 1);
	printf("|");

	// 往右移动
	set_cursor_position(MARGIN_X + 28, 1);
	printf("欢迎来到笑傲江湖世界！");  // 游戏名称最好也定义为常量

	// 往右移动
	set_cursor_position(MARGIN_X + 77, 1);
	printf("|");

	// 在第2行的第MARGIN_X开始打印
	set_cursor_position(MARGIN_X, 2);
	printf("%s", SEP);
}

/** 显示游戏地图 */
void show_map(void)
{
	// 要根据当前玩家的坐标来显示地图的文字
	int i, j;

	// 打印地图
	for (i = 0; i < 8; i++)
	{
		// 移动到每行的开头
		set_cursor_position(MARGIN_X, MAP_START_Y + i);
		for (j = 0; j < 8; j++)
		{
			// 打印开头的|
			if (j == 0)
				printf("|   ");

			// 检查所在的坐标
			if (i == Y && j == X)
			{
				// 更改地图文字的颜色和背景色
				set_color(5, 15);
			}
			printf("%-9s", map_array[i][j].name);
			set_color(10, 0);  // 打印完特殊地图后，将颜色变回默认颜色
		}

		// 移动到行末
		set_cursor_position(MARGIN_X + 77, MAP_START_Y + i);
		// 打印结尾的|
		printf("|");
	}

	// 移动到地图下面
	set_cursor_position(MARGIN_X, MAP_END_Y);
	// 打印分隔符
	printf(SEP);
}

/** 显示游戏地图下方的游戏信息 */
void show_information(void)
{
	int i;

	// 移动到信息的开头
	set_cursor_position(MARGIN_X, INFO_START_Y);

	// 信息窗口一共有7行
	for (i = 0; i < 7; i++)
	{
		// 移动到每行的开头并打印|
		set_cursor_position(MARGIN_X, INFO_START_Y + i);
		printf("|");

		// 移动到每行的末尾并打印|
		set_cursor_position(MARGIN_X + 77, INFO_START_Y + i);
		printf("|");
	}
	// 移动到信息下面打印分隔符
	set_cursor_position(MARGIN_X, INFO_END_Y);
	printf(SEP);
}

/** 显示游戏主菜单 */
void show_main_menu(void)
{
	// 移动到主菜单的开头
	set_cursor_position(MARGIN_X, MAINMENU_START_Y);
	printf("游戏菜单：");

	// 继续向下移动并打印菜单
	set_cursor_position(MARGIN_X, MAINMENU_START_Y + 1);
	printf("1、自我欣赏");
	set_cursor_position(MARGIN_X, MAINMENU_START_Y + 2);
	printf("2、查找怪物");
}
