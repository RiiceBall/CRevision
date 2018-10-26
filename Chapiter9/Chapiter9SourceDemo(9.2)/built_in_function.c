#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 常用内置函数，0表示假，非0表示真
	printf("%d\n",isupper('a'));  // isupper: 是否为大写字母
	printf("%d\n",islower('a'));  // islower：是否为小写字母
	printf("%d\n",isalpha(97));   // isalpha：返回字符是否为字母

	// 如果传入的是数字，则表示的是ASCII码
	printf("%d\n",isdigit(50));   // 是否为数字

	// 转换大小写，只能转换字母
	printf("大写的a：%c\n", toupper('a'));
	printf("大写的9：%c\n", toupper('9'));

	return (0);
}
