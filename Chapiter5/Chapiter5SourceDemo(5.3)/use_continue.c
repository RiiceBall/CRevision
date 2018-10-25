#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;           // 循环变量
	int age;         // 年龄
	int count = 0;   // 计数器变量

	for (i = 0; i < 5; i++)
	{
		printf("请输入玩家年龄：");
		scanf("%d", &age);

		if (age >= 0)   // 正确
			continue ;  // 跳过正确的情况
		count++;        // 输入错误则计数器+1
	}
	printf("输入错误%d次！\n", count);

	return (0);
}
