#include <stdio.h>
#include <stdlib.h>

// 返回传入字符串的长度
int get_str_length(char str[]);

/** 计算并返回字符串长度 */
int get_str_length(char str[])
{
	int count = 0;  // 字符串长度

	// 循环到\0就结束，\0不计算在字符串长度内
	while (str[count] != '\0')
	{
		// 碰到\n则替换并结束
		// 因为使用fgets接收的字符串结尾会多个\n
		if (str[count] == '\n')
		{
			str[count] = '\0';  // 替换
			break ;
		}
		count++;
	}

	return (count);
}
int main(void)
{
	char names[50];
	int len;

	printf("请输入称呼：");
	// fgets数组末尾会自动加上\n
	fgets(names, 10, stdin);
	len = get_str_length(names);

	printf("names的长度为：%d\n", len);

	return (0);
}
