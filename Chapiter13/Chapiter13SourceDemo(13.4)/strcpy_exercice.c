#include <stdio.h>
#include <stdlib.h>
#include <string.h>   // �ַ���������

int main(void)
{
	char word1[50] = "Helloworld";
	char word2[20];

	printf("�������ַ�����");
	gets(word2);
	// ʹ�����ú�������word2�е����ݸ��Ƶ�word1������
	strcpy(word1, word2);
	printf("word1: %s\tword2: %s\n", word1, word2);

	return (0);
}
