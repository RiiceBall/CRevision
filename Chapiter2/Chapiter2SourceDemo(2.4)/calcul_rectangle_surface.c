#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float width = 2.5f;     // ��
	float height = 4.0f;    // ��
	float surface = width * height; // �������

	// ��ʾfloat��Ҫ��%f
	// %.2f������ʾ�����ͱ���ʱ��ֻ��ʾС�������λ
	printf("�����ε�����ǣ�%.2f\n", surface);

	return (0);
}
