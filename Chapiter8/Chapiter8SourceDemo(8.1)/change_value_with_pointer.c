#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num = 1024;
	int *ptr_num;

	// 取num变量的地址赋值给ptr_num
	ptr_num = &num;  // &为获取变量地址

	*ptr_num = 1111;  // 相当于num = 1111;
	printf("num：%d *ptr_num：%d\n", num, *ptr_num);
	// 两个值都为1111

	return (0);
}
