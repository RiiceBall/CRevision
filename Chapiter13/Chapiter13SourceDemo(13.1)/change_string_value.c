#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// ��������һ����һ��Ŀռ䣬��Ϊһ����ֵ���޷����Ĵ�С
	// �����ʱ������ʱ���볬������Ĵ�С���������޷�Ԥ�ϵĽ��
	char names[50] = "jack";

	printf("�����ƣ�%s\n", names);
	printf("�����������ƣ�");
	scanf("%s", names);
	printf("�����ƣ�%s\n", names);

	return (0);
}
