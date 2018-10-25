#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 打印简易加法表

	int num;  // 加法的结果
	int i;    // 循环变量

	printf("请输入一个数字：");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		// 打印格式：0 + 8 = 8
		printf("%d + %d = %d", i, (num - i), num);

		// 这里需要探讨：什么情况打印\t什么情况打印\n?
		// 结论：我们需要通过判断循环变量的值，确定打印的符号

		if (i % 2 == 0) // 当i是偶数的情况（0，2，4，6）
		{
			printf("\t");
		}
		else    // 奇数的情况
		{
			printf("\n");
		}
	}

	return (0);
}
