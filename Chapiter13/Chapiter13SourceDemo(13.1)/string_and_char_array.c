#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// �����ַ����ļ��ַ�ʽ
	// �ַ������ַ�������������һλ�Ƿ��ǿ��ַ�
	char names1[] = {'j', 'a', 'c', 'k', '\0'};  // �ַ�����
	char names2[] = "jack";  // �ַ�����Ĭ���ڽ�β�Զ�����\0

	printf("names1��ռ�ռ��С��%d\n", sizeof(names1));
	printf("names2��ռ�ռ��С��%d\n", sizeof(names2));

	return (0);
}
