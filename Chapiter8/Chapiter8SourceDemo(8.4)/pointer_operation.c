#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i = 0;
	double score[] = {98, 89, 65, 43, 76};
	double *ptr_score;

	ptr_score = &score[1];  // ��ȡ�����2��Ԫ�صĵ�ַ
	ptr_score += 2;         // ����ַ����2
	printf("%.2lf\n", *ptr_score);  // ����������4��Ԫ�ص�ֵ

	ptr_score -= 3;         // ����ַ��ȥ3
	printf("%.2lf\n", *ptr_score);  // ����������1��Ԫ�ص�ֵ

	// �����ַ��������Ӽ���ע�ⲻҪ�������鼴��

	return (0);
}
