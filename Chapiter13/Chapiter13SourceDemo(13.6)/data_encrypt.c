#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 实现字符串的加密与解密
// 加密方式：将字符串中每个字符加上它在字符串中的位置和一个偏移量5
// 例如：xuetang9中，第一个字符x在字符串中的位置为0，那么对应的密文是'm'+0+5

#define KEY 5   // 偏移量 / 秘钥

/*
 * 加/解密传入的字符串
 * 参数：要加/解密的字符串
 * 返回值：返回加/解密后的字符串
 */
char *encrypt(char password[]);
char *decrypt(char password[]);

int main(void)
{
	char password[50] = "123456";  // 需要加密的密码

	encrypt(password);  // 对字符串加密
	printf("加密后的字符串为：%s\n", password);

	decrypt(password);  // 对字符串解密
	printf("解密后的字符串为：%s\n", password);

	return (0);
}

/** 加密函数 */
char *encrypt(char password[])
{
	int i = 0;
	int count = strlen(password);  // 字符串的长度

	for (; i < count; i++)
	{
		// 将字符串中每个字符加上它在字符串中的位置和一个偏移量5
		password[i] = password[i] + i + KEY;
	}

	return (password);
	//字符串最后的\0是否需要替换？- 不需要
}

/** 解密函数 */
char *decrypt(char password[])
{
	int i = 0;
	int count = strlen(password);  // 字符串的长度

	for (; i < count; i++)
	{
		// 将字符串中每个字符减去它在字符串中的位置和一个偏移量5
		password[i] = password[i] - i - KEY;
	}

	return (password);
	//字符串最后的\0是否需要替换？- 不需要
}
