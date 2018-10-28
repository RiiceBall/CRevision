#include <stdio.h>
#include <stdlib.h>
#include <string.h>   // 字符串函数库

int main(void)
{
	char word1[50] = "Helloworld";
	char word2[20];

	printf("请输入字符串：");
	gets(word2);
	// 使用内置函数，将word2中的内容复制到word1数组中
	strcpy(word1, word2);
	printf("word1: %s\tword2: %s\n", word1, word2);

	return (0);
}
