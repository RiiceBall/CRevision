#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define USER_NAME "admin"  // 需要输入的用户名
#define PASSWORD  "admin"  // 需要输入的密码

/*
 * 验证传入的用户名和密码是否正确
 * 参数1：需要验证的用户名
 * 参数2：需要验证的密码
 * 返回： 如果用户名和密码合法，返回1，否则返回0
 */
int login(char user_name[], char password[]);

// 封装fgets 参数一：用来接收字符串的字符数组，参数二：接收的字符总数
void my_fgets(char str[], int count);

int main(void)
{
	char userName[50];  // 用户名
	char password[50];  // 密码

	printf("请输入用户名：");
	my_fgets(userName, 50);
	printf("请输入密码：");
	my_fgets(password, 50);

	// 检查用户名和密码是否正确
	if (login(userName, password) == 1)
	{
		printf("恭喜，登陆系统成功!\n");
	}
	else
	{
		printf("很遗憾，用户名或密码输入错误，请重新录入!\n");
	}

	return (0);
}

/** 检查用户输入的账号密码 */
int login(char user_name[], char password[])
{
	int result = 0;

	// strcmp函数检查两个字符串是否相同，如果相同返回0，否则返回非0
	if (strcmp(USER_NAME, user_name) == 0 && strcmp(password, PASSWORD) == 0)
	{
		// 验证合法
		result = 1;
	}

	return (result);
}

/** 接收字符串 */
void my_fgets(char str[], int count)
{
	// 使用fgets函数接收字符串
	fgets(str, count, stdin);

	// 使用\0替换字符数组的最后一位\n
	// 返回\n字符所在的指针
	char *find = strchr(str, '\n'); // 查找换行符
	if (find)   // 若找到
	{
		*find = '\0'; // 根据找到的指针，修改指向的元素为\0
	}
}
