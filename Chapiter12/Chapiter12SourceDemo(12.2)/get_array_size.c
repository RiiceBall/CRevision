#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// �������С
	double test[] = {1, 2, 3, 4, 5, 6, 7};

	// ��Ҫ����sizeof(������) / sizeof(�������ͻ��������һ��Ԫ��)
	printf("test�����Ԫ�ظ�����%d\n", sizeof(test) / sizeof(test[0]));

	return (0);
}
