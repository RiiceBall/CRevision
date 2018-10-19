/**
 * my_counter.c
 * 用来存放计算函数调用次数的函数原型及实现
 */
int counter(void);  // 用来计算本函数被调用了多少次

int counter(void)
{
	// 静态存储，如果不定义为静态变量，每次调用函数count都将被重置为0
	static int count = 0; // 第一次执行会分配空间，以后就不再分配空间了-本句只会被执行一次
	count++;
	return count;
}
