#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 定义两个整型变量和指针
	int num1 = 1024;
	int num2 = 2048;
	int *ptr1;
	int *ptr2;

	// 将变量地址保存到指针中
	ptr1 = &num1;
	ptr2 = &num2;
	printf("num1的值是：%d\tnum1的地址是:%p\n", num1, ptr1);
	printf("num2的值是：%d\tnum2的地址是:%p\n", num2, ptr2);

	// 将变量1的值赋给变量2
	// num2 = num1; 和 *ptr2 = *ptr1;  等价的

	// 直接变幻地址
	ptr2 = ptr1;
	printf("\n重新赋值后：\n");
	printf("num1的值是：%d\tnum1的地址是:%p\n", num1, ptr1);
	printf("num2的值是：%d\tnum2的地址是:%p\n", num2, ptr2);

	*ptr2 = 11111;
	printf("\n重新赋值后：\n");
	printf("num1的值是：%d\tnum1的地址是:%p\n", num1, ptr1);
	printf("num2的值是：%d\tnum2的地址是:%p\n", num2, ptr2);

	return (0);
}
