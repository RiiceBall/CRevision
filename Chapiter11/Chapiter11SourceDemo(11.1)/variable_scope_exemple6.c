#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int count = 0;

	do {
		int count = 0;
		count++;    // 内部count
		printf("count=%d\n", count);
		count++;    // 内部count
	} while (count < 5); // 外部count，导致死循环
	printf("count=%d\n", count);

	return (0);
}
