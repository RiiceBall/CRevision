#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// ���������ַ���������ʱ�������С����Ҫ����������ַ�����1
	// ��Ϊ������Զ����ַ���������ĩβ�ӿ��ַ�\0
	// ������ǣ����ܻ�õ��޷�Ԥ�ϵĽ��
	char name1[8] = {'J', 'a', 'c', 'k', 's', 'o', 'n', '\0'};
	char name2[8] = "Jackson";

	printf("%s\n", name1);
	printf("%s\n", name2);

	return (0);
}
