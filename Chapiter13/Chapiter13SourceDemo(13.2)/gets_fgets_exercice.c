#include <stdio.h>
#include <stdlib.h>

// ���ش����ַ����ĳ���
int get_str_length(char str[]);

/** ���㲢�����ַ������� */
int get_str_length(char str[])
{
	int count = 0;  // �ַ�������

	// ѭ����\0�ͽ�����\0���������ַ���������
	while (str[count] != '\0')
	{
		// ����\n���滻������
		// ��Ϊʹ��fgets���յ��ַ�����β����\n
		if (str[count] == '\n')
		{
			str[count] = '\0';  // �滻
			break ;
		}
		count++;
	}

	return (count);
}
int main(void)
{
	char names[50];
	int len;

	printf("������ƺ���");
	// fgets����ĩβ���Զ�����\n
	fgets(names, 10, stdin);
	len = get_str_length(names);

	printf("names�ĳ���Ϊ��%d\n", len);

	return (0);
}
