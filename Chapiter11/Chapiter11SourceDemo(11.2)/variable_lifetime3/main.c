#include <stdio.h>
#include <stdlib.h>

void report_count(void);
void counter(int num);
int count = 0;         // �ļ��������ⲿ����

int main(void)
{
	int value;        // �Զ�����
	register int i;   // �Ĵ�������

	printf("�������������֣�0�˳�:");
	while (scanf("%d", &value) == 1 && value > 0)
	{
		count++;
		for (i = value; i >= 0; i--)
			counter(i);
		printf("�������������֣�0�˳�:");
	}
	report_count();

	return (0);
}

void report_count(void)
{
	printf("ѭ��ִ����%d��\n", count);
}
