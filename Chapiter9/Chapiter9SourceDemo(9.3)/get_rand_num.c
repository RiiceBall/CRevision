#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	// 注意：#include <time.h> 头文件的引入

	// 设置随即种子 - 一般与时间连用 因为时间每时每刻是不同的
	srand(time(NULL));

	// 取随机数
	int num = rand();
	printf("%d\n",num);

	exit(0);  // 0 - 则正常退出  非0 - 不正常退出

	return (0);
}

