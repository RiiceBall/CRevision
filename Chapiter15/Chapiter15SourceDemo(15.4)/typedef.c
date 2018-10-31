#include <stdio.h>
#include <stdlib.h>

// 使用typedef的缩短声明变量时的数据类型名称
typedef struct Hero
{
	char *name;  // 英雄的名称
	int age;     // 英雄的年龄
	char *job;   // 英雄的职业
	char *skill; // 英雄的技能
}Hero;

// 也可以修改其他变量类型
typedef unsigned char Byte;  // 将unsigned char改为Byte

int main(void)
{
	// 可以将typedef理解为改名

	// 使用：
	Hero hero = {"佟湘玉", 35, "掌柜的", "额滴神呐"};
	// 如果没有typedef就是：
	// struct Hero hero = {"佟湘玉", 35, "掌柜的", "额滴神呐"};

	// 定义一个unsigned char类型的变量
	Byte bt_value_1;

	return (0);
}
