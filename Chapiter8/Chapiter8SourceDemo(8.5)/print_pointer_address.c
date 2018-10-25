#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int array[] = {15, 20, 25, 30, 35};
	int i;   // 循环变量
	int *ptr_array = array;  // 获取数组地址

	// 复制完毕后，就可以使用指针访问数组元素了
	// 有三种方式可以访问数组元素

	// 第一种：数组形式访问，ptr_array[i]
	printf("第一种访问方式：ptr_array[i]\n");
	for (i = 0; i < 5; i++)
	{
		printf("第%d个元素的值为%d\t地址为：%p\n", i + 1, ptr_array[i], &ptr_array[i]);
	}
	printf("\n");

	// 第二种：指针形式访问：*(ptr_array + i)
	printf("第二种访问方式：*(ptr_array + i)\n");
	for (i = 0; i < 5; i++)
	{
		printf("第%d个元素的值为%d\t地址为：%p\n", i + 1, *(ptr_array + i), ptr_array + i);
	}
	printf("\n");

	// 第三种：访问首地址，每次都要移动指针，*ptr_array
	printf("第三种访问方式：*ptr_array\n");
	for (i = 0; i < 5; i++)
	{
		printf("第%d个元素的值为%d\t地址为：%p\n", i + 1, *ptr_array, ptr_array);
		// 每次循环都会移动指针的指向，要注意重置（ptr_array = array）
		ptr_array++;
	}
	ptr_array = array;

	return (0);
}
