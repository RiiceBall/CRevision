#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *words = "My heart is still.";

	words += 9;   // ��ָ�������ƶ�9������words[0]Ϊis��i
	puts(words);  // ����"is still."

	return (0);
}
