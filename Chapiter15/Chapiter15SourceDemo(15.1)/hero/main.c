#include <stdio.h>
#include <stdlib.h>
#include "hero.h"

// 引用hero.c文件中的heros全局变量
extern Hero heros[];

int main(void)
{
	// 调用打印函数
	show();

	return (0);
}
