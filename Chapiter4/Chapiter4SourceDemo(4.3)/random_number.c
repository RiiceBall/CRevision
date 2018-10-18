#include <stdio.h>
#include <stdlib.h>
#include <time.h>   // 为了使用time()函数

int main(void)
{
	// 使用时间作为种子，产生不一样的随机数字
	// 如果不使用这个函数每次运行都会得到同样的随机数
	srand(time(NULL));

	// rand()函数的取值范围是0-32767
	printf("随机数字：%d\n", rand());

	return (0);
}
