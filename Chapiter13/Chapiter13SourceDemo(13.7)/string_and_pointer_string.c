#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 理解字符串和字符指针的区别
	char str1[] = "For The Horde";  // 将常量"For The Horde"复制给str1
	char *str2 = "For The Horde";   // 指向常量"For The Horde"

	// 由于str2直接指向常量，所以修改时常量将会被更改
	// 建议将str2设置为常量，const char *str2

	printf("字符串常量的地址：%p\n", "For The Horde");
	printf("字符数组的首地址：%p\n", str1);
	printf("字符指针的取值：%p\n", str2);

	// str1++; 不能执行！

	return (0);
}
