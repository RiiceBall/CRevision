#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// do-while循环案例

	int choice;  // 用户的选择

	while (1)
	{
		// 打印游戏菜单
		printf("性格测试：\n");
		printf("如果您是一位君王，对于身旁的伴侣您希望？\n");
		printf("1、只要有一位真爱的妻子。\n");
		printf("2、可以两位以上的爱人。\n");
		printf("3、拥有三千佳丽。\n");

		do{	// 如果输入错误，将会一直循环输入
			printf("请选择：");
			scanf("%d", &choice);
			if (choice <= 0 || choice > 3)
			{
				printf("只能输入1-3之间的数字！请重新输入：\n");
			}
		}while (choice <= 0 || choice > 3);	// 思考：choice什么值的时候，执行循环？

		// 如果执行到了这里，证明用户的输入是正确的，在1-3之间
		switch (choice)
		{
		case 1:
			printf("您选择了生命中的唯一，然而老九君已经看穿了一切！\n");
			break;
		case 2:
			printf("你个花心大萝卜！\n");
			break;
		case 3:
			printf("金哥金哥，10元一包，江浙沪包邮！\n");
			break;
		}
	}

	return 0;
}
