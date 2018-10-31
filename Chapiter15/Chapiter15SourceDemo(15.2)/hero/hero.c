#include "hero.h"

// 定义英雄数组
// 给一个足够大的空间，因为定义完后是不能修改的
Hero heros[100] = {
	{"影流之主劫", 'm', "刺客", 579, 0.644, "位移", {2012, 8, 15}},
	{"琴瑟仙女娑娜", 'f', "法师", 482, 0.644, "减速", {2010, 9, 20}},
	{"疾风剑豪亚索", 'm', "战士", 517, 0.67, "护盾、位移", {2013, 12, 23}}
};

int count = 3;  // 当前英雄数

// 动态录入内容
void input(void)
{
	// 首先录入内容
	// 第一个录入完毕后，询问是否继续录入？
	char answer = 'y';  // 用户回答
	do {
		// 检查英雄数是否为满
		if (count == 100)
		{
			printf("英雄的栏位已满，请到游戏商城购买！");
			break ;  // 结束录入
		}

		printf("\n当前录入第%d位英雄的信息：\n", count + 1);
		printf("英雄名称：");
		heros[count].name = (char*)malloc(sizeof(char) * 50);  // 分配空间
		scanf("%s", heros[count].name);

		printf("性别：");
		fflush(stdin);
		heros[count].sex = getchar();
		fflush(stdin);

		printf("职业：");
		heros[count].job = (char*)malloc(sizeof(char) * 50);  // 分配空间
		scanf("%s", heros[count].job);

		// 给其他变量手动赋值
		heros[count].life = 1000;
		heros[count].speed = 0.655;
		heros[count].abillity = "上天、入地";
		heros[count].pub_time.year = 2018;
		heros[count].pub_time.month = 10;
		heros[count].pub_time.day = 31;

		count++;  // 录入完毕后，英雄数+1

		printf("是否继续录入英雄的信息？(y/n)");
		answer = getch();  // 用户按下键后立刻就接收字符，不需要等待回车

	} while (answer == 'y' || answer == 'Y');  // 如果用户回答的是y的话就继续
}

// 计算平均生命值
void show_avg(void)
{
	int life_sum = 0;  // 血量之和
	double avg = 0;    // 平均值
	int i;

	// 循环全部英雄
	for (i = 0; i < count; i++)
	{
		life_sum += (heros + i)->life;  // 累加全部英雄血量
	}

	// 计算平均值
	avg = life_sum * 1.0 / count;
	printf("生命值的平均值为：%.2lf\n", avg);
}

// 显示英雄的详细信息
void show(void)
{
	int i;
	// 打印英雄详情
	printf("\n");
	for (i = 0; i < count; i++)
	{
		printf("%s\t%s\t%d-%d-%d\n", (heros + i)->name, heros[i].job,
				heros[i].pub_time.year, heros[i].pub_time.month, heros[i].pub_time.day);
	}
}
