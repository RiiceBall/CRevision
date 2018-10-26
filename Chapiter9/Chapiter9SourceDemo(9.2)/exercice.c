#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 思考题：如何将用户输入的小写数字转换成中文大写？
	// 1234 - 壹仟贰佰叁拾肆元整

	int money,count = 0;   // count是数字的位数
	int trasfer_money[6];  // 默认支持六位数字
	int i = 0;
	char unit[10][4] = {"零","壹","贰","叁","肆","伍","陆","柒","捌","玖","拾"};

	printf("请输入金额：\n");
	scanf("%d", &money);

	// 先判断用户输入了几位数字，再将每一位数字取出来
	while (money != 0)
	{
		trasfer_money[i] = money % 10;  // 取出数字
		money /= 10;  // 再去掉最后一位
		i++;
		count++;
	}

	printf("您输入的数字一共有%d位！\n", count);
	printf("现在我们将为您打印：\n");
	for (i = 0; i < count; i++)
	{
		printf("%d-%s\n", trasfer_money[i], unit[trasfer_money[i]]);
	}

	return (0);
}
