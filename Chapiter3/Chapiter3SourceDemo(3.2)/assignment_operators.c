#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// ���ϸ�ֵ�����ʾ��
	int x = 5;

	x += 10;    // �ȼ� x = x + 10;
	printf("%d\n", x);
	x -= 10;    // �ȼ� x = x - 10;
	printf("%d\n", x);
	x *= 10;    // �ȼ� x = x * 10;
	printf("%d\n", x);
	x /= 10;    // �ȼ� x = x / 10;
	printf("%d\n", x);
	x %= 10;    // �ȼ� x = x % 10;
	printf("%d\n", x);

	return (0);
}
