#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// ʹ��gets�������ַ���
	// ʹ��puts����ַ���

	char words1[50];
	char words2[50];

	printf("�������ʣ�");
	gets(words1);
	gets(words2);
	puts("*****************************");  // ���һ���ַ���
	// puts�������Զ�������ַ������һ���س�
	puts(words1);
	puts(words2);

	return (0);
}
