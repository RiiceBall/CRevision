#include <stdio.h>
#include <stdlib.h>

/*
Բ�� s = PI * r * r;
���Σ�s = width * height;
�����Σ�s = width * height / 2;
*/

// ���ݴ���İ뾶������Բ�����
double calc_circle(double radius);

// ���û���������зǸ���֤/���û�������ȷ��ֵ/�õ��û��������ȷֵ
int validate(double num);  // ��֤�����num�Ƿ�Ϊ����
// ����ʹ������ķ���
// double input(void);     // ������ֱ�����û����룬���������Ҫ����������룬������ȷ����

// ���ݴ���ľ��ο�͸ߣ����ؾ��ε����
double calc_rectangle(double width, double height);

int main(void)
{
	// ˼�����ڱ������У���Щ�����ǱȽ�ͨ�õģ��ǿ�����д�ɺ�����ε��õģ�
	// 1���û�����ı���������
	// 2����ӡ���
	double radius;         // �û�����İ뾶
	double width, height;  // ͼ�εĿ�͸�
	double s;              // ͼ�ε����
	int choice;            // �û���ѡ��

	printf("1��Բ\n");
	printf("2������\n");
	printf("3��������\n");
	printf("��ϵͳ֧�ּ�������ͼ�ε��������ѡ��\n");
	scanf("%d", &choice);

	// �����û�ѡ�������в�ͬ�ļ���
	switch (choice)
	{
		case 1:  // Բ��
			printf("������Բ�뾶����������Բ�������");
			do
			{
				scanf("%lf", &radius);  // ¼��

				// ���û��ͨ����֤���ʹ�ӡһ����ʾ
				if (!validate(radius))
				{
					printf("��¼������ݲ���Ϊ����������������һ��������");
				}
			} while (!validate(radius));  // ����֤��ͨ����ʱ������¼��
			s = calc_circle(radius);  // ���ü���Բ����ķ���
			break ;

		case 2:  // ����
			printf("��������εĿ�͸ߣ�����������ε������");
			do
			{
				scanf("%lf%lf", &width, &height);

				// ���û��ͨ����֤���ʹ�ӡһ����ʾ
				if(!validate(width) || !validate(height))
				{
					printf("��¼������ݲ���Ϊ��������������������������");
				}
			} while (!validate(width) || !validate(height)); // ����֤��ͨ��ʱ������������

			//��֤ͨ��֮���ڵ��÷���
			s = calc_rectangle(width,height);
			break ;

		case 3:  // ������
			s = 0;  // ��s����Ϊ0
			printf("������������ʵ�֣�\n");
			break ;

		default:
			printf("��ϵͳֻ֧������ͼ�Σ�����1~3֮��ѡ��");
	}

	printf("ͼ�ε����Ϊ��%.2lf\n", s);

	// �ں�����ʵ�ֵ��Ǹ�ͼ�εļ������


	return (0);
}

// ���ݴ���İ뾶������Բ�����
double calc_circle(double radius)
{
	// pow���������Լ�����

	// ����Բ�����
	double s = 3.14 * pow(radius, 2);

	// ���ؼ���õ����
	return (s);
}

// ��֤�����num�Ƿ�Ϊ����
int validate(double num)
{
	return (num > 0);  // ���num > 0���᷵��һ������ֵ����ʾ��
}

// ���ݴ���ľ��ο�͸ߣ����ؾ��ε����
double calc_rectangle(double width, double height)
{
	return (width * height);  // �������
}
