#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;           // ѭ������
	int age;         // ����
	int count = 0;   // ����������

	for (i = 0; i < 5; i++)
	{
		printf("������������䣺");
		scanf("%d", &age);

		if (age >= 0)   // ��ȷ
			continue ;  // ������ȷ�����
		count++;        // ��������������+1
	}
	printf("�������%d�Σ�\n", count);

	return (0);
}
