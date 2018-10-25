#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num = 1024;  // 整型变量
	int *ptr_num;    // 整型指针变量

	// 取num的地址赋值给ptr_num变量
	ptr_num = &num;

	printf("num的值为：%d\n", num);
	printf("num的内存地址为：%p\n", &num);
	printf("ptr_num的值为：%p\n", ptr_num);
	printf("ptr_num的内存地址为：%p\n", &ptr_num);
	printf("*ptr_num指向的值为：%d\n", *ptr_num);

	return (0);
}
