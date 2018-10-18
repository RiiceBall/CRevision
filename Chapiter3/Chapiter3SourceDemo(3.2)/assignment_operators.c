#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 复合赋值运算符示例
	int x = 5;

	x += 10;    // 等价 x = x + 10;
	printf("%d\n", x);
	x -= 10;    // 等价 x = x - 10;
	printf("%d\n", x);
	x *= 10;    // 等价 x = x * 10;
	printf("%d\n", x);
	x /= 10;    // 等价 x = x / 10;
	printf("%d\n", x);
	x %= 10;    // 等价 x = x % 10;
	printf("%d\n", x);

	return (0);
}
