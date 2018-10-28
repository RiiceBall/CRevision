#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char words[50];
	printf("请输入歌词：");

	// words是数组，不需要&符号
	scanf("%s", words);
	printf("%s\n", words);

	return (0);
}
