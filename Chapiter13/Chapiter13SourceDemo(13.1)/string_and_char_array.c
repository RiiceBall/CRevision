#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 定义字符串的几种方式
	// 字符串和字符数组的区别：最后一位是否是空字符
	char names1[] = {'j', 'a', 'c', 'k', '\0'};  // 字符数组
	char names2[] = "jack";  // 字符串，默认在结尾自动加上\0

	printf("names1所占空间大小：%d\n", sizeof(names1));
	printf("names2所占空间大小：%d\n", sizeof(names2));

	return (0);
}
