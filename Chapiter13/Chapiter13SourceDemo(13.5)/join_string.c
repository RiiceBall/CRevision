#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	// 演示字符串连接
	char str1[100] = "你好，中国！";
	char str2[20] = "你也好，美国";

	printf("拼接前：\n");
	printf("str1: %s\tstr2: %s\n", str1, str2);

	// 字符串连接
	// strcat将第二个字符串拼接到第一个字符串的后面
	strcat(str1, str2);

	printf("拼接后：\n");
	printf("str1: %s\tstr2: %s\n", str1, str2);

	return (0);
}
