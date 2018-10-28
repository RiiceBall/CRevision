#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	char names[50] = "jack";

	printf("请输入新名称：");
	fgets(names, 10, stdin);  // 从标准输入流中读取10-1个字节到数组names中
	// 注意：fgets会默认给最后一个元素设置为\n
	printf("%s", names);
	printf("=======================\n");

	printf("数组names2中的内容：\n");
	for (i = 0; i < 50; i++)
	{
		// 打印每个字符的ASCII码
		printf("%d\n", names[i]);
	}

	return (0);
}
