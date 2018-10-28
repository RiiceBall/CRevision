#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 尽量定义一个大一点的空间，因为一旦赋值将无法更改大小
	// 如果到时候输入时输入超过定义的大小，将会有无法预料的结果
	char names[50] = "jack";

	printf("现名称：%s\n", names);
	printf("请输入新名称：");
	scanf("%s", names);
	printf("新名称：%s\n", names);

	return (0);
}
