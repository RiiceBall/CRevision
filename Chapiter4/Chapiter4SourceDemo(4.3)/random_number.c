#include <stdio.h>
#include <stdlib.h>
#include <time.h>   // Ϊ��ʹ��time()����

int main(void)
{
	// ʹ��ʱ����Ϊ���ӣ�������һ�����������
	// �����ʹ���������ÿ�����ж���õ�ͬ���������
	srand(time(NULL));

	// rand()������ȡֵ��Χ��0-32767
	printf("������֣�%d\n", rand());

	return (0);
}
