#include "game.h"

// 定义道具数组
Prop prop_array[] = {
	{1, "帝皇天烈剑", 1, 5, 5000, weapon, .min_attack=1, .max_attack=4, "上古三皇五帝用过的宝剑！"},
	{2, "荆棘之甲", 2, 5, 10000, armor, .min_defense=2, .max_defense=6, "取日月之精华，反弹伤害！"},
	{3, "玉液琼浆", 3, 5, 15000, consumables, .min_power=100, .max_power=500, "蟠桃会上的御用饮品，玉母娘娘都说好！"}
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
	int i;

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
}
