#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char ch1 = 'a'; // 字符a
	char ch2 = 'A'; // 字符A
	char ch3 = ' '; // 字符空格
	char ch4 = '0'; // 字符0（不是数字0！）
	char ch5 = '!'; // 字符感叹号

	// 每个字符都有其对应的ASCII码（其实就是一些数字）
	// 如果想要打印字符需要用%c
	// 如果想要打印ASCII码需要使用%d
	printf("字符\tASCII码\n");
	printf("%c\t%d\n", ch1, ch1);
	printf("%c\t%d\n", ch2, ch2);
	printf("%c\t%d\n", ch3, ch3);
	printf("%c\t%d\n", ch4, ch4);
	printf("%c\t%d\n", ch5, ch5);

	return (0);
}
