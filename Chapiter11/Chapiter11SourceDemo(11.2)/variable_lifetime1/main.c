#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// ����ĳ�������������˶��ٴ�

	int count = 0;
	counter();
	counter();
	counter();
	count = counter();  // ���Ĵε���
	printf("count = %d\n", count); // ���Ϊ4

	return (0);
}
