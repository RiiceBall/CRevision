#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// ǿ������ת��
	// �����������ͱ���
	int num1 = 5, num2 = 2;

	// ���������ν��ǿ��ת��Ϊdouble����
	double result = (double)num1 / num2;
	printf("num1 / num2 = %lf\n", result);

	// double > float > long > int > short
	double num = 6;         //С����ת������ ���� �Զ�����ת��
	int num3 = (int)num;    //������תС���� ���� ǿ������ת��

	printf("double %lf, int %d\n", num, num3);

	return (0);
}
