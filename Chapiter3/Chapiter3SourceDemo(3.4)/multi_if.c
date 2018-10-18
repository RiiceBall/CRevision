#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 多重嵌套if结构

	double flower_price; // 鲜花价格

	// 打印剧情
	printf("在一个月黑风高的夜晚，");
	printf("一个小男生用自己的积蓄买了一束鲜花。\n");
	printf("（以下是小女生问，男生答）\n");
	printf("小女生：你这花多少钱一束啊？\n");
	printf("小男生：");

	// 需要录入鲜花价格
	scanf("%lf", &flower_price);

	// 小女生开始打小算盘了
	printf("小女生：");
	if (flower_price > 999999)
	{
		printf("小女孩直接晕了过去！\n");
	}
	else if (flower_price >= 100000 && flower_price <= 999999) // 10万到999999之间
	{
		printf("明天结婚！\n");
	}
	else if (flower_price >= 10000 && flower_price < 100000)
	{
		printf("拉拉手吧！\n");
	}
	else if (flower_price > 1000 && flower_price < 10000)
	{
		printf("你是个好人！\n");
	}
	else
	{
		printf("啊呸！\n");
	}

	return (0);
}
