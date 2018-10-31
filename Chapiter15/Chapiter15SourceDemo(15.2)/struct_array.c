#include <stdio.h>
#include <stdlib.h>

// 结构类型的数组称为结构数组
// 定义一个角色结构
struct Role
{
	char *name;  // 名称
	int age;     // 年龄
	char *job;   // 职位
	char *skill; // 特长
}roles[25];  // 定义了一个25大小的结构数组变量
// struct Role roles[25];

// 或者直接赋值
struct Role1
{
	char *name;  // 名称
	int age;     // 年龄
	char *job;   // 职位
	char *skill; // 特长
}roles1[] = {
	{"郭芙蓉", 29, "打杂的", "排山倒海"},
	{"吕秀才", 30, "账房", "子曾经曰过"}
};  // 直接赋值

int main(void)
{

	return (0);
}
