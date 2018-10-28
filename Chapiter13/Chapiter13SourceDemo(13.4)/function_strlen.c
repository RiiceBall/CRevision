#include <stdio.h>
#include <stdlib.h>
#include <string.h>   // 字符串函数库

int main(void)
{
	char words1[] = "HelloWorld";
	char words2[] = {'H', 'e', 'l', 'l', 'o', 'W', 'o', 'r', 'l', 'd', '\0'};
	char words3[] = "你好，老九学堂！";

	// strlen函数计算字符串的长度，不含字符串结束标志\0
	printf("words1长度为：%d\n", strlen(words1));
	printf("words2长度为：%d\n", strlen(words2));
	printf("words3长度为：%d\n", strlen(words3));

	return (0);
}
