#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i = 0;

	// 如果想要打印10000次就可以写：while (i < 10000)
	while (i < 10)  // while：if的加强版
	{
		printf("第%d遍\n", i);
		i++;
		// 通过观察发现，可以通过控制i的值，来控制循环的次数
	}

	return (0);
}
