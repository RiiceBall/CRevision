#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	// ע�⣺#include <time.h> ͷ�ļ�������

	// �����漴���� - һ����ʱ������ ��Ϊʱ��ÿʱÿ���ǲ�ͬ��
	srand(time(NULL));

	// ȡ�����
	int num = rand();
	printf("%d\n",num);

	exit(0);  // 0 - �������˳�  ��0 - �������˳�

	return (0);
}

