#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i = 0;

	// �����Ҫ��ӡ10000�ξͿ���д��while (i < 10000)
	while (i < 10)  // while��if�ļ�ǿ��
	{
		printf("��%d��\n", i);
		i++;
		// ͨ���۲췢�֣�����ͨ������i��ֵ��������ѭ���Ĵ���
	}

	return (0);
}
