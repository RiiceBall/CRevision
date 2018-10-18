#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// sizeof运算符示例
	// 可以查看类型所占用的空间
	printf("sizeof(int) = %d\n", sizeof(int));
	printf("sizeof(long) = %d\n", sizeof(1000L));
	printf("sizeof(long long) = %d\n", sizeof(long long));
	printf("sizeof(flout) = %d\n", sizeof(34.4f));
	printf("sizeof(double) = %d\n", sizeof(34.4));
	printf("sizeof(char) = %d\n", sizeof(char));

	return (0);
}
