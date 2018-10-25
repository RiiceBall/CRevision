#include <stdio.h>
#include <stdlib.h>
#define N 5

int main(void)
{
	// 实现数组的逆序  - 原理：（冒泡排序成了顺序）数组的首位元素进行交换

	int array[] = {15, 20, 25, 30, 35};
	int temp;  // 替换变量
	int i;     // 循环变量

	// 使用指针命名
	int *ptr_array_start = array;        // 指针指向首元素的地址
	int *ptr_array_end = array + N - 1;  // 指针指向末尾元素的地址

	// array + 4 和 array + N - 1 是等价写法
	// array[4] N-1可以代表最大元素的下标array[N - 1]

	// 打印逆序前结果：
	printf("逆序前：\n");
	for (i = 0; i < N; i++)
	{
		printf("%d\t",*(array + i));
	}

	// 当首指针不等于尾指针时
	while (ptr_array_start != ptr_array_end )
	{
		// 固定公式，请在指针前加*，代表数值的交换！！
		temp = *ptr_array_end;
		*ptr_array_end = *ptr_array_start;
		*ptr_array_start = temp;

		// 首地址依次加一
		ptr_array_start++;  // 思考：为什么这里就没有加*？？

		// 尾地址依次减一
		ptr_array_end--;
	}

	// 打印逆序后结果：
	printf("\n逆序后：\n");
	for (i = 0; i < N; i++)
	{
		printf("%d\t",*(array + i));
	}

	return (0);
}
