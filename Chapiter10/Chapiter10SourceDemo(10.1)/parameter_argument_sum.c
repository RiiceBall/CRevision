#include <stdio.h>
#include <stdlib.h>

// ��a��b��ֵ
// int a �� int b ������ʽ������parameter��
int sum(int a, int b);

// ��a��b��ֵ
int sum(int a, int b)
{
	// a, bΪ��ʽ����

	// ��������ֵ֮��
	return (a + b);
}

int main(void)
{
	int num1 = 10;
	int num2 = 20;

	// num1, num2Ϊʵ�ʲ�����argument��
	int result = sum(num1, num2);
	printf("�����%d\n", result);

	return (0);
}
