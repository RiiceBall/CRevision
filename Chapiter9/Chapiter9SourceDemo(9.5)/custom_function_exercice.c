#include <stdio.h>
#include <stdlib.h>

// ��д����ʵ������Ԫ�صĲ��ң�Ҫ�󷵻��ҵ���Ԫ���±�
int search(void);

// ��д����ʵ��ð�����򲢷�������������
// δʵ��
// double[] sort(void);

// ��д����Ҫ���û��������루6λ���������������룩�����ز���ӡ�û��������ȷ����
// δʵ��
// char *password(void);

int main(void)
{
	int index = search();  // ���ú��������淵��ֵ
	printf("�ҵ�Ԫ���±��ǣ�%d\n",index);

	return (0);
}

/** ����Ԫ�صĲ��ң�Ҫ�󷵻��ҵ���Ԫ���±� */
int search(void)
{
	int nums[] = {34, 56, 78, 3, 2};
	int i;
	int search_num, search_index = -1;
	// Ҫ���ҵ����֣������ҵ����ֵ��±꣬û�ҵ�indexΪ-1

	printf("������Ҫ�����������֣�");
	scanf("%d", &search_num);

	for (i = 0; i < 5; i++)
	{
		if (search_num == *(nums + i))
		{
			search_index = i;  // ��¼�±�
			break ;
		}
	}

	// ���ز��ҵ���Ԫ���±�
	return (search_index);
}
