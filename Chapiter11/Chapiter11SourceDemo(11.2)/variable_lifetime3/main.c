#include <stdio.h>
#include <stdlib.h>

void report_count(void);
void counter(int num);
int count = 0;         // 文件作用域，外部链接

int main(void)
{
	int value;        // 自动变量
	register int i;   // 寄存器变量

	printf("请输入任意数字，0退出:");
	while (scanf("%d", &value) == 1 && value > 0)
	{
		count++;
		for (i = value; i >= 0; i--)
			counter(i);
		printf("请输入任意数字，0退出:");
	}
	report_count();

	return (0);
}

void report_count(void)
{
	printf("循环执行了%d次\n", count);
}
