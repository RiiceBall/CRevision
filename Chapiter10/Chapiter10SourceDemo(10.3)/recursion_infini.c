#include <stdio.h>
#include <stdlib.h>

int num = 0;  // ȫ�ֱ���

void recursion_infini(void)
{
	// ���ڸõݹ麯��û�н������������Ի�����ִ����ȥ

	printf("%d\n", num++);  // ��ӡ��֮��num++
	recursion_infini();     // �Լ������Լ� - �ݹ�
}

int main(void)
{
	// �������޵ݹ�
	recursion_infini();

	return (0);
}
