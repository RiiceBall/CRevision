#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 使用gets来输入字符串
	// 使用puts输出字符串

	char words1[50];
	char words2[50];

	printf("请输入歌词：");
	gets(words1);
	gets(words2);
	puts("*****************************");  // 输出一个字符串
	// puts函数会自动在输出字符串后加一个回车
	puts(words1);
	puts(words2);

	return (0);
}
