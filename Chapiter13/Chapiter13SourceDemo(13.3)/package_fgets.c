#include <stdio.h>
#include <stdlib.h>

// ���ش����ַ����ĳ���
int get_str_length(char str[]);

// ��װfgets ����һ�����������ַ������ַ����飬�����������յ��ַ�����
void get_string(char str[], int count);

/** �����ַ��� */
void get_string(char str[], int count)
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

/** ���㲢�����ַ������� */
int get_str_length(char str[])
{
	int count = 0;  // �ַ�������

	// ѭ����\0�ͽ�����\0���������ַ���������
	while (str[count] != '\0')
	{
		count++;
	}

	return (count);
}
int main(void)
{
	char names[50];
	int len;

	printf("������ƺ���");
	// ʹ��get_string��������ȡ�ַ���
	get_string(names, 20);
	len = get_str_length(names);

	printf("names�ĳ���Ϊ��%d\n", len);

	return (0);
}
