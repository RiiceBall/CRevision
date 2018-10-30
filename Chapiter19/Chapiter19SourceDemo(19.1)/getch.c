#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
	int ch;  // 用于保存getch获取的值

	printf("请按任意键来查看它的值：");

	// getch函数和getchar函数相似
	// 等待用户输入一个键，但是不需要回车就会自动接收
	ch = getch();

	// 打印按键的值
	printf("%d", ch);

	return (0);
}
