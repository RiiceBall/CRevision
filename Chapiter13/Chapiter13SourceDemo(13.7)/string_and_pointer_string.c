#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// ����ַ������ַ�ָ�������
	char str1[] = "For The Horde";  // ������"For The Horde"���Ƹ�str1
	char *str2 = "For The Horde";   // ָ����"For The Horde"

	// ����str2ֱ��ָ�����������޸�ʱ�������ᱻ����
	// ���齫str2����Ϊ������const char *str2

	printf("�ַ��������ĵ�ַ��%p\n", "For The Horde");
	printf("�ַ�������׵�ַ��%p\n", str1);
	printf("�ַ�ָ���ȡֵ��%p\n", str2);

	// str1++; ����ִ�У�

	return (0);
}
