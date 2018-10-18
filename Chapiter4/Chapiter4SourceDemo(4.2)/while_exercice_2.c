#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 使用循环实现三次密码输入错误退出系统

	int i = 0;      // 循环变量
	int password;   // 密码

	while(i < 3)
	{
		printf("请输入密码：");
		scanf("%d",&password);

		if (123456 != password)
		{
			printf("密码输入错误，当前输入第%d次密码。\n", i + 1);
		}
		else
		{
			printf("密码输入正确，退出登陆页面。");
			break;
		}

		// 第三次输入错误，就要强制退出系统
		if (i == 2)
		{
			printf("密码输入错误三次，系统强制退出！\n");
			exit(0);    // 告诉操作系统，系统正常退出
		}
		i++;
	}

	return (0);
}
