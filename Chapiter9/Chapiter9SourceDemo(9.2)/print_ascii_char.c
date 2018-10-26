#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;

	// 打印对应的所有ASCII码对应的字符
	for(i = 0; i < 127; i++)
	{
		printf("%c,",i);
	}

	return (0);
}
