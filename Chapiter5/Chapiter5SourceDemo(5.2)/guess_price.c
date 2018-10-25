#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	/*
		我们书写一个猜商品价格的小游戏
		1.我们设定一个商品的价格，让用户去猜
		2.用户输入猜测的价格后，系统给出大小的提示
		3.如果在5轮内就猜到正确的价格，给与奖励提示
	*/
	// 循环次数是多少？
	// 每猜一次，猜测总次数 +1

	int price = 7890;   // 要用户猜的商品价格，也可以使用随机函数生成
	int guess_price;    // 用户猜测的商品价格
	int count = 0;      // 用来记录猜的次数

	// 为了让每次随机数都不一样
	srand(time(NULL));
	price = rand() % 10000;  // 随机生成猜测数字

	for (;;)
	{
		printf("请输入猜测是商品价格：");
		scanf("%d", &guess_price);

		if (guess_price > price)
		{
			printf("大了！\n");
		}
		else if (guess_price < price)
		{
			printf("小了!\n");
		}
		else      // 否则
		{
			printf("恭喜，猜对啦！\n");
			count++;
			break;   // 如果猜对了，就跳出循环
		}
		count++;  // 每次猜测后猜测次数++
	}

	printf("您一共猜了%d次！\n", count);
	if (count <= 5)
	{
		printf("精彩，您简直是天才！\n");
	}

	return (0);
}
