#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *num;
	int i;
	num = (int*)calloc(5, sizeof(int));
	// Ϊǰ���ָ�붯̬�ķ�����20���ֽ�(�������)�Ŀռ�

	num[4] = 9;  // ���˵��ĸ�Ԫ�أ�����Ԫ�ص�ֵ��Ϊ0��calloc�Զ����ã�
	for (i = 0; i < 5; i++)
	{
		printf("%d\n",num[i]);
	}
	free(num);  // �����ͷ��ڴ�
	num = NULL; // ���õı��ϰ��

	return (0);
}
