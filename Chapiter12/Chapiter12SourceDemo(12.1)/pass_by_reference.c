#include <stdio.h>
#include <stdlib.h>

/** ����num�����ĵ�ַ�������õ�ַָ���ֵ��һ */
void change(int *num)
{
	// �����num��main�е�num��ͬһ��
	// ��������ļ�һ��Ӱ��main�е�num
	*num += 1;
}

int main(void)
{
	int num = 9;
	change(&num);  // ���ú���
	printf("num = %d\n", num);  // ���Ϊ10

	return (0);
}
