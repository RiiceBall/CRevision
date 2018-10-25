#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 循环录入用户性别，只能使用字符m/M（男）或f/F（女）。
	// 一旦输入错误，结束录入

	char sex;       // 定义性别字符
	int count = 0;  // 计算录入正确的次数

	while (1)
	{
		printf("请输入性别字符：");
		scanf("%c", &sex);
		// sex = getchar();  // 可以使用scanf或者getchar
		fflush (stdin);      // 记得清空缓冲区，避免错误

		// 检查输入是否为合法字符
		if (sex != 'm' && sex != 'M' && sex != 'f' && sex != 'F')
		{
			break;
		}
		count++;
	}
	printf("一共录入次数为：%d", count);

	return (0);
}
