#include <stdio.h>
#include <stdlib.h>     // 标准库
#include <time.h>       // 为了使用time()函数
#include <windows.h>    // 为了使用Sleep()函数

int main(void)
{
	// 循环模拟玩家对战

	// 使用时间作为种子，产生不一样的随机数字
	srand(time(NULL));

	/*
		使用循环模拟实现玩家对战
		双方初始HP均为100
		每次攻击5-15
		HP最先到零或以下的被KO
	*/

	int hp1 = 100, hp2 = 100;   // 对战两人初始血量
	int attack1, attack2;       // 两人每次的攻击
	int i = 0;                  // 对战的轮数

	while (hp1 >= 0 && hp2 >= 0) // 当个玩家都活着的时候，继续进行对战过程
	{
		// 默认attack1首先攻击
		attack1 = rand() % 11 + 5;   // 5-15之间的攻击力
		if (attack1 == 15)   // 暴击，让攻击力变成原来的两倍
			attack1 *= 2;

		attack2 = rand() % 11 + 5;
		if (attack2 == 15)   // 暴击，让攻击力变成原来的两倍
			attack2 *= 2;

		// 玩家1攻击，玩家2掉血
		hp2 -= attack1;
		// 玩家2攻击，玩家1掉血
		hp1 -= attack2;

		// 建议两个人打完后，立即使用if判断，血量少于0的，就判定为输
		printf("****************************\n");
		printf("第%d轮： \n",i + 1);
		printf("玩家1攻击力：%d，玩家2剩余血量：%d\n", attack1, hp2);
		printf("玩家2攻击力：%d，玩家1剩余血量：%d\n", attack2, hp1);
		printf("****************************\n");
		i++;

		Sleep(500); // 休眠500毫秒
	}
	printf("KO!~ 游戏结束，玩家1的血量：%d\t玩家2的血量：%d\n", hp1, hp2);

	return (0);
}
