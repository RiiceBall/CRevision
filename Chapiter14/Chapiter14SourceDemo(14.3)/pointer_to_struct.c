#include <stdio.h>
#include <stdlib.h>

// 生日结构体
struct Birth
{
	int year;   // 年
	int month;  // 月
	int day;    // 日
};

// 在英雄数据结构中引用生日结构
struct Hero
{
	char *name;          // 英雄的名称
	int level;           // 英雄的等级
	struct Birth birth;  // 英雄的生日
	char *job;           // 英雄的职业
	char *skill;         // 英雄的技能
}jackie_chan;

int main(void)
{
	// 直接使用创建数据是定义的变量
	// 给年月日赋值
	jackie_chan.name = "Jackiechan";
	jackie_chan.birth.year = 1954;
	jackie_chan.birth.month = 4;
	jackie_chan.birth.day = 7;

	printf("%s的生日为：%d年%d月%d日\n", jackie_chan.name,
			jackie_chan.birth.year, jackie_chan.birth.month, jackie_chan.birth.day);

	// 初始化一个结构体中的结构体变量，需要用{}
	struct Hero laola = {"劳拉", 28, {1998, 5, 4}, "考古学家", "洛阳铲"};

	// 定义一个指向laola的指针
	struct Hero *ptr_laola = &laola;

	printf("%s的生日为：%d年%d月%d日\n", laola.name,
			laola.birth.year, laola.birth.month, laola.birth.day);

	// 使用指针访问数据结构里面的变量的两种方式（第二种用法比较普遍）
	printf("%s\n", (*ptr_laola).name);
	printf("%s\n", ptr_laola->name);

	return (0);
}
