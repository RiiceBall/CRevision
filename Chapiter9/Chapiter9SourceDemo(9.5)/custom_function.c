#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// ����ԭ��
// �������д��main֮�Ͽ���ʡ�Ժ���ԭ��
// �������д��main֮�±���д�Ϻ���ԭ��
void calc_circle(void);
void calc_rectangle(void);
int cal_sum(void);

/** ����Բ�����������ʵ�֣� */
void calc_circle(void)
{
	double radius, s;  // �뾶�����

	printf("������Բ�İ뾶��");
	scanf("%lf", &radius);

	// Բ�����=3.14���԰뾶��ƽ��
	s = 3.14 * pow(radius, 2);
	printf("�뾶Ϊ��%.2lf��Բ���Ϊ��%.2lf\n", radius, s);
}

/** ������ε����������ʵ�֣� */
void calc_rectangle(void)
{
	double width, height;  // ���εĿ�͸�
	double s;              // ���ε����

	printf("��������εĿ�͸ߣ�");
	scanf("%lf%lf", &width, &height);

	if (width <= 0 || height <= 0)
	{
		printf("��͸߲���Ϊ��������ˣ���أ���\n");
		return ;
		// return��������ֹ���������أ��ɷ��ؿ�ֵ
	}
	s = width * height;
	printf("���ε����Ϊ��%.2lf\n", s);
}

/** ����1-100֮���ż���ͣ������ؽ�� */
int cal_sum(void)
{
	int sum = 0;
	int i = 1;

	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)
		sum += i;
	}

	// ������õĽ������
	return (sum);
}

int main(void)
{
	// ��������Ҫһ��ʼ�Ϳ���������ĳ������
	// ��д�����Ĳ��裺��ɺ�����Ҫ��
	// 1����Ҫ����ֵ��
	// 2����������ʲô��
	// 3����Ҫ���������������

	calc_circle();       // ���ü���Բ����ĺ���
	calc_rectangle();    // ���ü����������ĺ���

	// ��������з���ֵ����ô���õ�ʱ�򣬼ǵõ�ʹ�ö�Ӧ���͵ı��������գ�
	int sum = cal_sum();
	printf("1-100֮���ż����Ϊ��%d\n", sum);

	return (0);
}
