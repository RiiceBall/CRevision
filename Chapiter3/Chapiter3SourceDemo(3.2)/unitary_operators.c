#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// һԪ�����Ϊ++��--

	int num = 5;
	int result = num++;     // �ȼ� result = num; num++;
	printf("result = %d\n", result);

	int num = 2;
	int result = --num;     // �ȼ� result = num; num++;
	printf("result = %d\n", result);

	return (0);
}
