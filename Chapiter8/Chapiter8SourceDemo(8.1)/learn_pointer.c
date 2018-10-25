#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num = 9;
	int * ptr_num = &num;       // 将num的地址赋值给prt_num
	int * ptr_num2 = &ptr_num;  // 头疼点：取指针的地址赋值给指针

	// %p指针占位符 %x 16进制占位符
	// 打印num变量的地址
	printf("num变量的地址是：%p\t %x\n", ptr_num, &num);
	printf("\n指针ptr_num的地址为：%p\n", ptr_num2);

	// 使用指针修改变量的值
	*ptr_num = 9999;
	printf("*ptr_num对应的值为：%d\n", num);

	return (0);
}
