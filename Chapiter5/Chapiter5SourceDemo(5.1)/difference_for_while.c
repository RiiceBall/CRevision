#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;  // ѭ������

	i = 0;         // ��ʼ������
	while (i < 9)  // �˳�����
	{
		printf("��%d��whileѭ����\n", i);  // ѭ�����
		i++;       // ��������
	}

	// ��ʼ���������˳������͵�������
	for (i = 0; i < 9; i++)
	{
		printf("��%d��forѭ����\n", i);    // ѭ�����
	}

	// ��������ѭ������Ч��һ��

	return (0);
}
