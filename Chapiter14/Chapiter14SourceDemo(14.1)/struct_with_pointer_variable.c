#include <stdio.h>
#include <stdlib.h>

// 英雄结构
struct Hero {
	char *name;   // 英雄的名称
	int level;    // 英雄的等级
	char *job;    // 英雄的职业
	char *skill;  // 英雄的技能
};

int main(void)
{
	// 声明一个英雄
	struct Hero jackie_chan;

	// 给这个英雄赋值
	jackie_chan.name = "JackieChan";  // 指针的好处是可以直接指向某个常量
	jackie_chan.level = 25;
	jackie_chan.job = "战士";
	jackie_chan.skill = "醉拳";

	// 指针的坏处是动态赋值时必须先给它空间
	jackie_chan.name = (char*)malloc(sizeof(char) * 50);
	printf("请输入一个名称：");
	scanf("%s", jackie_chan.name);

	printf("%s\t%d\t%s\t%s\n", jackie_chan.name, jackie_chan.level, jackie_chan.job, jackie_chan.skill);

	// 记得清空分配空间！
	free(jackie_chan.name);

	return (0);
}
