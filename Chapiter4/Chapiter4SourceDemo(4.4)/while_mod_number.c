#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int temp;    // ��ʱ����
	int num = 123456789;    // Ҫȡ��ÿһλ��������

	// ���ɣ���10��ģ10
	while (num > 0)
	{
		printf("%d\n", num % 10);
		num /= 10;	// ȡ����λ���ֺ�����ȥ����λ����
	}

	return 0;
}
