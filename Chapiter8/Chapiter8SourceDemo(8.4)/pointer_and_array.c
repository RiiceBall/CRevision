#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i = 0;
	double score[] = {98, 89, 65, 43, 76};
	// ʹ��ָ���������Ԫ��ʱ����printf����Ȼֻ���ñ������������� %.2lf�� ����%p ����%s
	double *prt_score = score;

	// score��&score[0]�����������׵�ַ
	printf("������׵�ַ��%p\t�������Ԫ�ص�ַ��%p\n", score, &score[0]);

	// ����ĵ�һ��Ԫ�صĵ�ַ���������׵�ַ
	for(i = 0; i < 5; i++)
	{
		printf("%.2lf\n", prt_score[i]);      // ��ӡ����ĵ�i��Ԫ��
		printf("%.2lf\n", *(prt_score + i));  // ��ӡ����ĵ�i��Ԫ��
		// printf("%.2lf\n",*prt_score++);    // ���++ָ���ַ����ʧ��ͷ
	}

	// ��������ϣ���ٴδ�ӡ�����ÿ��Ԫ��
	printf("\n****************************\n");
	// prt_score = score;  // ���ʹ��*prt_score++����Ҫ����prt_score��ָ�룩��λ��
	for(i = 0;i < 5 ;i++)
	{
		printf("%.2lf\n", prt_score[i]);
		printf("%.2lf\n", *(prt_score + i));
		// printf("%.2lf\n", *prt_score++);
	}

	return (0);
}
