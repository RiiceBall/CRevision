#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// �㷨�����ʾ��
	// �����������ͱ���
	int num1 = 5, num2 = 2;

	// 4��double�ͱ���������ż�����
	double result1, result2, result3, result4, result5;

	// ��ӡ�������ͱ�����ֵ
	printf("num1 = %d \t num2 = %d\n", num1, num2);

	// ʹ�������
	result1 = num1 / num2;  // ����
	result2 = num1 % num2;  // ȡģ
	result3 = num1 * num2;  // �˷�
	result4 = num1++;       // ���ã��ȸ�ֵ��Ӽ�
	result5 = --num2;       // ǰ�ã��ȼ�����ֵ

	// ��ӡ���
	printf("num1 / num2 = %lf\n", result1);
	printf("num1 %% num2 = %lf\n", result2);
	printf("num1 * num2 = %lf\n", result3);
	printf("num1++ = %lf\n", result4);
	printf("--num2 = %lf\n", result5);

	return (0);
}
