#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// �㷨����� + - * / %
	// ��ϵ����� > < >= <= == !=
	// �߼������ && || ��
	// ��ֵ����� = += -= /= *= %=

	printf("8 > 9 �Ľ��Ϊ %d\n", 8 > 9);   // ���н�� 0
	printf("8 == 9 �Ľ��Ϊ %d\n", 8 == 9); // ���н�� 0
	printf("9 == 9 �Ľ��Ϊ %d\n", 9 == 9); / /���н�� 1

	printf("5 > 9 && 4 < 7 �Ľ��Ϊ %d\n", 5 > 9 && 4 < 7); // ���н�� 0

	// ����++
	int num = 10;	// 10 > 11 && 9 < 20
	// &&�����Ϊ�٣��ұ߲�����
	// ���10 > 11Ϊ�٣��ұ�9 < 20������
	// ����++����ִ�к�++��ǰ��--����--��ִ��
	int result = num++ > 11 && --num < 20;  // ��·����

	// ���⣺result = ��		num = ?
	printf("result = %d\tnum = %d\n", result, num);
	// ���н��  result = 0      num = 11

	// ǰ��--
	int num1 = 10;	//	9 < 20 && 9 > 11
	int result1 = --num1 < 20 && num1++ > 11;  // ��·����
	// ���⣺result1 = ��		num1 = ?
	printf("result1 = %d\tnum1 = %d\n", result1, num1);
	// ���н��  result1 = 0      num1 = 10

	return (0);
}
