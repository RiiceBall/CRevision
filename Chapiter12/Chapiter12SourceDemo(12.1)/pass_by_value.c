#include <stdio.h>
#include <stdlib.h>

/** ����num������ֵ����++ */
void change(int num)
{
	// ������յ���ʵ��main��num�����ĸ���
	// �����޸������num��main���numû��Ӱ��
	num++;
}

int main(void)
{
	int num = 9;

	change(num);   // ���ú���
	printf("num = %d\n", num);  // �������9

	return (0);
}
