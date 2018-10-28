#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
	模拟实现道具店购物功能（商店暂时只支持一种类型的商品）
	1、商品结构-名称、单价、库存量、描述
	2、背包结构-玩家编号、商品[10]、道具数量、最大道具数
	3、玩家结构-编号、名称、密码、金钱、[背包]
	模拟玩家购买游戏道具
	1、玩家选择要购买的道具
	2、玩家同意交易后扣除相应游戏币
	3、对应商品库存-1
	4、玩家背包中增加商品或该商品数量+1
*/

/** 商品结构 */
typedef struct _prop {
	int id;          // 道具的唯一编号
	char name[50];   // 道具名称
	double price;    // 道具单价
	int stock;       // 库存量：如果在背包中，表示此道具的叠加数量
	char desc[200];  // 道具的功能描述
}Prop;

/** 背包结构 */
typedef struct _bag {
	int player_id;   // 所属玩家的编号
	int prop_count;  // 当前背包中，道具的数量
	int prop_max;    // 当前背包的插槽总数 - 插槽数量可以让用户用rmb购买
	Prop props[8];   // 当前背包中的道具数组，暂时定义为8
}Bag;

/** 玩家结构 */
typedef struct _player {
	int id;          // 玩家编号
	char name[50];   // 用户名/昵称
	char pass[50];   // 密码
	Bag bag;         // 玩家的背包
	double gold;     // 玩家金币 - 人性提示：可以将10w铜币转换成银币、金币显示
	double sycee;    // 元宝数量
}Player;

Prop *props;            // 指向道具数组的指针
Player *players;        // 指向玩家数组的指针
int props_count = 0;    // 道具数组大小
int players_count = 0;  // 玩家数组大小

// 用来初始化游戏数据
void init(void);

// 打印道具
void show_props(void);

// 打印玩家
void show_players(void);

/*
 * 交易函数
 * 参数1：参与交易的玩家指针 - 为了方便修改玩家交易后的金币数
 * 参数2：玩家购买的商品id
 */
void trade(Player *player, int prop_id);

int main(void)
{
	// 初始化游戏数据
	init();
	printf("\n*****************交易前*****************\n");
	// 打印这些初始化数据
	show_props();
	show_players();

	// 进行交易
	trade(&players[0], 3);
	trade(&players[1], 3);
	trade(&players[3], 4);
	trade(&players[0], 3);
	trade(&players[2], 5);
	trade(&players[0], 3);
	trade(&players[1], 2);
	trade(&players[0], 5);
	trade(&players[2], 4);
	trade(&players[0], 3);
	trade(&players[1], 3);
	trade(&players[0], 3);
	trade(&players[2], 3);
	trade(&players[3], 3);
	trade(&players[0], 5);

	printf("\n*****************交易后*****************\n");
	show_props();
	show_players();

	return (0);
}

/**
 * 交易函数
 * 参数1：参与交易的玩家指针 - 为了方便修改玩家交易后的金币数
 * 参数2：玩家购买的商品id
 */
void trade(Player *player, int prop_id)
{
    // 需要判断：商品的库存，玩家余额够不够，玩家背包空间够不够

    int i;
    Prop *trade_prop = NULL;  // 要购买的商品指针

    // 搜索商品
    for (i = 0; i < props_count; i++)
	{
		if (prop_id == props[i].id) {
			trade_prop = &props[i];  // trade_prop = props + i;
			break ;
		}
	}

	// 检查商品库存
	if (trade_prop->stock <= 0)
	{
		printf("地主家都没有余粮！商店都被买空啦！\n");
		return ;
	}

	// 检查玩家余额
	if (player->gold < trade_prop->price)
	{
		printf("钱包都是瘪的，这里可是看钱的社会！\n");
		return ;
	}

	// 检查背包空间
	if (player->bag.prop_count >= player->bag.prop_max && player->bag.prop_count != 0)
	{
		printf("背包已满，交易失败！\n");
		return ;
	}

	// 满足交易条件，执行交易的业务操作
	// 1、商品库存-1
	trade_prop->stock--;

	// 2、玩家金币-商品单价
	player->gold -= trade_prop->price;

	// 3、玩家背包道具增加
	// 判断玩家背包中是否已有该商品

	// 如果有该商品，背包中的该商品总数+1
	for (i = 0; i < player->bag.prop_count; i++)
	{
		// 如果要购买的商品id跟背包中的某个商品id相同
		if (prop_id == player->bag.props[i].id)
		{
			player->bag.props[i].stock++;
			break ;
		}
	}

	// 如果没有该商品，该商品添加到背包中即可
	if (i == player->bag.prop_count)
	{
		// 想背包中创建一个商品-复制一份要交易的商品信息到背包中
		int new_index = player->bag.prop_count;
		player->bag.props[new_index].id = trade_prop->id;
		player->bag.props[new_index].price = trade_prop->price;
		player->bag.props[new_index].stock = 1;
		strcpy(player->bag.props[new_index].name, trade_prop->name);
		strcpy(player->bag.props[new_index].desc, trade_prop->desc);
		player->bag.prop_count++;
	}
}

/** 初始化数据 */
void init(void)
{
	// 道具数组
	static Prop prop_array[] = {
		{1, "双倍经验卡", 3000, 10, "双击666"},
		{2, "腐烂的道袍", 5000, 8, "只可远观不可亵玩！"},
		{3, "生锈的铁剑", 8000, 10, "新手专用"},
		{4, "无极袍", 13000, 5, "刀枪不入，水火不侵"},
		{5, "直升一级丹", 83000, 10, "吃了以后保准还想再吃再吃再吃。。。"}
	};
	props_count = sizeof(prop_array) / sizeof(Prop);  // 计算数组大小
	props = prop_array;      // 设定指针的指向

	// 玩家数组
	static Player player_array[] = {
		{1, "超级毛毛虫", "123456", .gold=5000000, .bag.prop_max=8},
		{2, "塔罗奥特曼", "123456", .gold=150000, .bag.prop_max=8},
		{3, "元始天尊之徒", "123456", .gold=500000, .bag.prop_max=8},
		{4, "星河", "123456", .gold=1150000, .bag.prop_max=8}
	};
	players_count = sizeof(player_array) / sizeof(Player);  // 计算数组大小
	players = player_array;  // 设定指针的指向
}

/** 显示道具数组 */
void show_props(void)
{
	int i;

	// 检查是否指向数组
	if (props == NULL) return ;

	printf("%-5s%-14s%-7s\t库存\t商品介绍\n", "编号", "名称", "单价");
	for (i = 0; i < props_count; i++)
	{
		printf("%-5d%-14s%-7.0lf\t%d\t%s\n", props[i].id, props[i].name, props[i].price, props[i].stock, props[i].desc);
	}
}

/** 显示玩家数组 */
void show_players(void)
{
	int i, j;

	// 检查是否指向数组
	if (players == NULL) return ;

	printf("编号\t%-14s金币\n", "名称");
	for (i = 0; i < players_count; i++)
	{
		printf("%d\t%-14s%.0lf\n", players[i].id, players[i].name, players[i].gold);

		// 打印玩家的背包
		for (j = 0; j < players[i].bag.prop_count; j++)
		{
			printf("\t%s\t%d\t", players[i].bag.props[j].name, players[i].bag.props[j].stock);
		}
		printf("\n");
	}
}
