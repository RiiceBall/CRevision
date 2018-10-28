#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 定义一个数组保存"My heart is still."
	// 在字符串中，每个储存单元占一个字符（包含空格、句号、回车符，等等）
	char str[20] = {'M', 'y', ' ', 'h', 'e', 'a', 'r', 't', ' ',
			'i', 's', ' ', 's', 't', 'i', 'l', 'l', '.', '\0'};

	printf("%s\n", str);

	return (0);
}
