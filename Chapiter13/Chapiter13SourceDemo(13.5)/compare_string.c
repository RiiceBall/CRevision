#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define USER_NAME "admin"  // ��Ҫ������û���
#define PASSWORD  "admin"  // ��Ҫ���������

/*
 * ��֤������û����������Ƿ���ȷ
 * ����1����Ҫ��֤���û���
 * ����2����Ҫ��֤������
 * ���أ� ����û���������Ϸ�������1�����򷵻�0
 */
int login(char user_name[], char password[]);

// ��װfgets ����һ�����������ַ������ַ����飬�����������յ��ַ�����
void my_fgets(char str[], int count);

int main(void)
{
	char userName[50];  // �û���
	char password[50];  // ����

	printf("�������û�����");
	my_fgets(userName, 50);
	printf("���������룺");
	my_fgets(password, 50);

	// ����û����������Ƿ���ȷ
	if (login(userName, password) == 1)
	{
		printf("��ϲ����½ϵͳ�ɹ�!\n");
	}
	else
	{
		printf("���ź����û����������������������¼��!\n");
	}

	return (0);
}

/** ����û�������˺����� */
int login(char user_name[], char password[])
{
	int result = 0;

	// strcmp������������ַ����Ƿ���ͬ�������ͬ����0�����򷵻ط�0
	if (strcmp(USER_NAME, user_name) == 0 && strcmp(password, PASSWORD) == 0)
	{
		// ��֤�Ϸ�
		result = 1;
	}

	return (result);
}

/** �����ַ��� */
void my_fgets(char str[], int count)
{
	// ʹ��fgets���������ַ���
	fgets(str, count, stdin);

	// ʹ��\0�滻�ַ���������һλ\n
	// ����\n�ַ����ڵ�ָ��
	char *find = strchr(str, '\n'); // ���һ��з�
	if (find)   // ���ҵ�
	{
		*find = '\0'; // �����ҵ���ָ�룬�޸�ָ���Ԫ��Ϊ\0
	}
}
