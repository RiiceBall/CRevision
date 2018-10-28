#include <stdio.h>
#include <stdlib.h>

// 返回传入字符串的长度
int get_str_length(char str[]);

// 封装fgets 参数一：用来接收字符串的字符数组，参数二：接收的字符总数
void get_string(char str[], int count);

/** 接收字符串 */
void get_string(char str[], int count)
{
	// 使用fgets函数接收字符串
	fgets(str, count, stdin);

	// 使用\0替换字符数组的最后一位\n
	// 返回\n字符所在的指针
	char *find = strchr(str, '\n'); // 查找换行符
	if (find)   // 若找到
	{
		*find = '\0'; // 根据找到的指针，修改指向的元素为\0
	}
}

/** 计算并返回字符串长度 */
int get_str_length(char str[])
{
	int count = 0;  // 字符串长度

	// 循环到\0就结束，\0不计算在字符串长度内
	while (str[count] != '\0')
	{
		count++;
	}

	return (count);
}
int main(void)
{
	char names[50];
	int len;

	printf("请输入称呼：");
	// 使用get_string函数来获取字符串
	get_string(names, 20);
	len = get_str_length(names);

	printf("names的长度为：%d\n", len);

	return (0);
}
