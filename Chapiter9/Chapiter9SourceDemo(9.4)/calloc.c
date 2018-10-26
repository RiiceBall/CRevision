#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *num;
	int i;
	num = (int*)calloc(5, sizeof(int));
	// 为前面的指针动态的分配了20个字节(五个整型)的空间

	num[4] = 9;  // 除了第四个元素，其他元素的值都为0（calloc自动设置）
	for (i = 0; i < 5; i++)
	{
		printf("%d\n",num[i]);
	}
	free(num);  // 用完释放内存
	num = NULL; // 良好的编程习惯

	return (0);
}
