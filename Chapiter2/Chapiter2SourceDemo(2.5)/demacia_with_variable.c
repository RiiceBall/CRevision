#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double attack = 57.88;      // �˺�ֵ
	double attack_add = 4.5;    // �˺�����ֵ
	int attack_range = 172;     // ��������

	// ʹ�ñ��������˺�ֵ���˺�����ֵ�͹�������
	// ���������Ժ��޸���Щֵ���ӵķ��㣬�����ظ�ʹ���ڲ�ͬ�ĵط�
	printf("���ƣ���������֮��������\n");
	printf("�˺���%.2lf(+%.1lf)\t�������룺%d\n", attack, attack_add, attack_range);
	printf("���ף�27.536(+3.0)\tħ    ����32.1(+1.25)\n");
	printf("������616.28(+84.25)\t�����ظ���7.84(+0.5)\n");
	printf("������0.0(+0.0)\t\t�����ظ���0.0(+0.0)\n");
	printf("���٣�340\t\t��    λ���ϵ� ���� ��Ұ\n");
	printf("��ȯ��450\t\t��    �ң�1000\n");

	return (0);
}
