#include "hero.h"

// 定义英雄数组
Hero heros[] = {
	{"影流之主劫", 'm', "刺客", 579, 0.644, "位移", {2012, 8, 15}},
	{"琴瑟仙女娑娜", 'f', "法师", 482, 0.644, "减速", {2010, 9, 20}},
	{"疾风剑豪亚索", 'm', "战士", 517, 0.67, "护盾、位移", {2013, 12, 23}}
};

// 显示英雄的详细信息
void show(void)
{
	// 如何知道结构数组的大小呢？
	int len = sizeof(heros) / sizeof(Hero);

	// 数组元素使用指针时，动态赋值需要首先分配内存
	printf("请输入名称：");
	heros[0].name = (char*)malloc(sizeof(char) * 50); // char name[50];
	scanf("%s", heros[0].name);

	int i;
	// 打印英雄详情
	for (i = 0; i < len; i++)
	{
		printf("%s\t%s\t%d-%d-%d\n", (heros + i)->name, heros[i].job,
				heros[i].pub_time.year, heros[i].pub_time.month, heros[i].pub_time.day);
	}
}
