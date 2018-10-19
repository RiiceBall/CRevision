#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int count1 = 1;

	do {
		int count2 = 0;
		count2++;
		printf("count1=%d\tcount2=%d\n", count1, count2);
	} while (++count1 < 5);
	printf("count1=%d\tcount2=%d\n", count1, count2); // 不可执行，因为count2未定义

	return (0);
}
