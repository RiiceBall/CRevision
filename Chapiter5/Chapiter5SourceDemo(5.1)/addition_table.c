#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// ��ӡ���׼ӷ���

	int num;  // �ӷ��Ľ��
	int i;    // ѭ������

	printf("������һ�����֣�");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		// ��ӡ��ʽ��0 + 8 = 8
		printf("%d + %d = %d", i, (num - i), num);

		// ������Ҫ̽�֣�ʲô�����ӡ\tʲô�����ӡ\n?
		// ���ۣ�������Ҫͨ���ж�ѭ��������ֵ��ȷ����ӡ�ķ���

		if (i % 2 == 0) // ��i��ż���������0��2��4��6��
		{
			printf("\t");
		}
		else    // ���������
		{
			printf("\n");
		}
	}

	return (0);
}
