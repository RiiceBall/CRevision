#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// switch case常见错误
	// 首先，两个case 2 ，需把把其中一个case 2 改为case 3；
	// 没有break；不会中断退出

	int ex = 1; // int ex = 7;
	switch (ex)
	{
		case 1:
			printf("海巨人金质宝箱\n");
		case 2:
			printf("食人魔法师银质宝箱\n");
		case 2:
			printf("守护者铜质宝箱\n");
		case 4:
			printf("持盾卫士木质宝箱\n");
		default:
			printf("没有任何奖励\n");
	}

	return (0);
}
