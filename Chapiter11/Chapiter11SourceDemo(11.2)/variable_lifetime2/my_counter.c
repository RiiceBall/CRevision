/**
 * my_counter.c
 * 用来存放计算函数调用次数的函数原型及实现
 */

// 引用了外部变量
extern int while_count;
void counter(int i);  // 用来计算counter函数执行多少次

void counter(int i)
{
	static int sub_total = 0; // 静态变量

	sub_total++;
	printf("counter函数被调用了%d次\n", sub_total);
	printf("当前是while的第%d轮!\n", while_count);
	return;
}
