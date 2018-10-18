#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 将小写字母转换为大写字母
	// 小写字母的ASCII码比大写字母的ASCII码大32
	// 所以将小写字母转换为大写字母有两个方法
	// 1、将小写字母减去32
	// 2、将小写字母减去空格（因为空格的ASCII码为32）

	char ch = 'a';
	printf("方法1：%c\n", ch - 32);
	printf("方法2：%c\n", ch - ' ');

	return (0);
}
