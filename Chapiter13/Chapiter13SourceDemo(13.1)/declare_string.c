#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 声明储存字符串的数组时，数组大小至少要比所储存的字符数多1
	// 因为编译会自动在字符串常量的末尾加空字符\0
	// 如果忘记，可能会得到无法预料的结果
	char name1[8] = {'J', 'a', 'c', 'k', 's', 'o', 'n', '\0'};
	char name2[8] = "Jackson";

	printf("%s\n", name1);
	printf("%s\n", name2);

	return (0);
}
