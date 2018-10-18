#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 创建两个整形
	// 一个保存用户输入，一个用于输出反转后数字
	int value = 0, right_num;

	// 请求用户输入并检查是否为正数
	do
	{
		printf("请输入一个数：");
		scanf("%d", &value);
		if (value <= 0)
			printf("必须为正数！\n");
	}while (value <= 0);

	// 反转数字
	printf("\n反转后的数为：\n");
	do
	{
		right_num = value % 10;
		printf("%d", right_num);
		value = value / 10;
	}while (value != 0);
	printf("\n");

	return (0);
}
