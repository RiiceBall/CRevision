#include <stdio.h>
#include <stdlib.h>

// ����ʵ��pow����
// ���һ��������n����
// double num �� int n ������ʽ������parameter��
double power(double num, int n);

// ���һ��������n����
double power(double num, int n)
{
	int i;  // ѭ������

	// ��ʼ�����Ϊ1����ΪҪ�۳ˣ�������С��Ϊ1
	double result = 1;

	// �۳�num����n��
	for (i = 0; i < n; i++)
	{
		result *= num; // �۳�
	}

	return (result);
}


int main(void)
{
	// 8��4Ϊʵ�ʲ�����argument�� - ����
	printf("%d��%d���ݵĽ��Ϊ��%.2lf", 8, 4, power(8, 4));

	return (0);
}
