#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// ʵ���ַ����ļ��������
// ���ܷ�ʽ�����ַ�����ÿ���ַ����������ַ����е�λ�ú�һ��ƫ����5
// ���磺xuetang9�У���һ���ַ�x���ַ����е�λ��Ϊ0����ô��Ӧ��������'m'+0+5

#define KEY 5   // ƫ���� / ��Կ

/*
 * ��/���ܴ�����ַ���
 * ������Ҫ��/���ܵ��ַ���
 * ����ֵ�����ؼ�/���ܺ���ַ���
 */
char *encrypt(char password[]);
char *decrypt(char password[]);

int main(void)
{
	char password[50] = "123456";  // ��Ҫ���ܵ�����

	encrypt(password);  // ���ַ�������
	printf("���ܺ���ַ���Ϊ��%s\n", password);

	decrypt(password);  // ���ַ�������
	printf("���ܺ���ַ���Ϊ��%s\n", password);

	return (0);
}

/** ���ܺ��� */
char *encrypt(char password[])
{
	int i = 0;
	int count = strlen(password);  // �ַ����ĳ���

	for (; i < count; i++)
	{
		// ���ַ�����ÿ���ַ����������ַ����е�λ�ú�һ��ƫ����5
		password[i] = password[i] + i + KEY;
	}

	return (password);
	//�ַ�������\0�Ƿ���Ҫ�滻��- ����Ҫ
}

/** ���ܺ��� */
char *decrypt(char password[])
{
	int i = 0;
	int count = strlen(password);  // �ַ����ĳ���

	for (; i < count; i++)
	{
		// ���ַ�����ÿ���ַ���ȥ�����ַ����е�λ�ú�һ��ƫ����5
		password[i] = password[i] - i - KEY;
	}

	return (password);
	//�ַ�������\0�Ƿ���Ҫ�滻��- ����Ҫ
}
