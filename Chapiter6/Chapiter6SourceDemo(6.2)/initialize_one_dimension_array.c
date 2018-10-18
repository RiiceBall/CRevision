#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 初始化一维数组

	// 正确：后面的元素个数与声明的一致
	int years[6] = {2012, 2013, 2014, 2015, 2016, 2017};

	// 正确：后面5个元素未初始化，默认值为0
	int months[12] = {1, 3, 5, 7, 8, 10, 12};

	// 正确：元素个数为2
	int days[] = {1, 15};

	// 错误：未知元素个数！
	int array[] = {};

	return (0);
}
