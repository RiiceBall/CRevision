#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// ����һ������
	int num = 10;

	--num;      // num--;   num = num - 1   �ȼ�д��
	num++;      // num = num + 1;   �ȼ�д��
	num += 5;   // num = num + 5;   �ȼ�д��
	printf("%d\n", num);

	return (0);
}
