#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 量数组大小
	double test[] = {1, 2, 3, 4, 5, 6, 7};

	// 需要计算sizeof(数组名) / sizeof(数组类型或者数组第一个元素)
	printf("test数组的元素个数：%d\n", sizeof(test) / sizeof(test[0]));

	return (0);
}
