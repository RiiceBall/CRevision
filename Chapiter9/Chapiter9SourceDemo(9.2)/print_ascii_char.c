#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;

	// ��ӡ��Ӧ������ASCII���Ӧ���ַ�
	for(i = 0; i < 127; i++)
	{
		printf("%c,",i);
	}

	return (0);
}
