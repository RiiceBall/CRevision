#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// sizeof�����ʾ��
	// ���Բ鿴������ռ�õĿռ�
	printf("sizeof(int) = %d\n", sizeof(int));
	printf("sizeof(long) = %d\n", sizeof(1000L));
	printf("sizeof(long long) = %d\n", sizeof(long long));
	printf("sizeof(flout) = %d\n", sizeof(34.4f));
	printf("sizeof(double) = %d\n", sizeof(34.4));
	printf("sizeof(char) = %d\n", sizeof(char));

	return (0);
}
