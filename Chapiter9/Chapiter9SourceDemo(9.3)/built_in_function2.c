#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	// ceil - ��һ��  floor - ȥβ��
	// ����Ǹ�����������෴

	printf("%.2lf\n", ceil(98.01));
	printf("%.2lf\n", floor(98.90));
	// ����Ϊ�������
	printf("%.2lf\n", ceil(-98.01));
	printf("%.2lf\n", floor(-98.90));

	printf("%.2lf\n", sqrt(9));   // ��ƽ����
	printf("%.2lf\n", pow(5,4));  // ���һ�����ֵĵڶ������ִ���
	printf("%d\n", abs(-98));     // �����ֵ

	return (0);
}
