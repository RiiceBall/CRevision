#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double radius = 2.5;    // �뾶
	double area = 3.141592653 * radius * radius;    // ���

	// ��ʾdouble��Ҫ��%lf
	// ���ϣ��С�������ֻ��ʾ��λ��������%.2lf
	printf("Բ�İ뾶Ϊ%lf�����Ϊ%lf\n", radius, area);

	return (0);
}
