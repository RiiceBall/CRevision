extern int count;         // 引用式声明，外部链接
static int total = 0;     // 静态定义，内部链接
void counter(int num);    // 函数原型

void counter(int num)
{
	// 局部静态变量
	static int sub_total = 0;

	if (num <= 0)
	{
		printf("第%d轮循环执行完毕\n",count);
		printf("局部静态变量sub_total和全局静态变量total:\n");
		printf("sub_total: %d\ttotal: %d\n", sub_total, total);
		sub_total = 0; // 每次内循环结束后重置为0
	}
	else
	{
		sub_total += num;
		total += num;
	}
}
