#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// ʹ��ѭ������1-100���ۼӺ�

	// ��Ҫѭ������
	int i = 1;
	// ��Ҫ�ۼӺͱ������������ÿ����ӵ�ֵ
	int sum = 0;

	while (i < 101)
	{
		// ÿ��ѭ���ۼӱ�ѭ��������
		sum = sum + i;  // sum += 1;
		// ѭ�������ĸ���
		i = i + 1;      // i++;
	}

	printf("1-100���ۼӽ��Ϊ��%d\n", sum);

	return (0);
}
