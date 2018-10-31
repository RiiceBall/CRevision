#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 英雄结构
struct Hero
{
	int id;          // 英雄的编号
	char name[50];   // 英雄的名称
	int level;       // 英雄的等级
	int hp;          // 英雄的血量
	int mp;          // 英雄的魔法值
	char skill[50];  // 英雄的技能
};

int main(void)
{
	// 使用结构体
	// 多种赋值方式
	// 一个个赋值
	struct Hero hero1;
	hero1.id = 1;
	strcpy(hero1.name, "德玛西亚之力");
	hero1.level = 5;
	hero1.hp = 500;
	hero1.mp = 100;
	strcpy(hero1.skill, "大保健");
	printf("%d\t%-11s\t%d\t%d\t%d\t%s\n", hero1.id, hero1.name, hero1.level, hero1.hp, hero1.mp, hero1.skill);

	// 一次性赋值
	struct Hero hero2 = {2, "祥林嫂", 10, 1000, 200, "疯狂呢喃"};
	printf("%d\t%-11s\t%d\t%d\t%d\t%s\n", hero2.id, hero2.name, hero2.level, hero2.hp, hero2.mp, hero2.skill);

	// 一次性赋值跳过某变量（这里跳过mp）
	// 由于跳过某变量，之后的变量需要加上变量名
	// 没赋值的数字自动为0，没赋值的字符串自动为空
	struct Hero hero3 = {3, "神婆", 15, 1500, .skill="神婆之光"};
	printf("%d\t%-11s\t%d\t%d\t%d\t%s\n", hero3.id, hero3.name, hero3.level, hero3.hp, hero3.mp, hero3.skill);

	return (0);
}
