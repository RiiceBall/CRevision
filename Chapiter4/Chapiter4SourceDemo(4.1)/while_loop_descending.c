#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i = 9;

	// 每次循环将i减去2
	while (i > 1)
	{
		printf("第%d遍\n", i);
		i -= 2;
	}

	return (0);
}
