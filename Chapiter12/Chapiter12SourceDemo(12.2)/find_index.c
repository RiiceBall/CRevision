#include <stdio.h>
#include <stdlib.h>

int count = 0;  // ȫ�ֱ���

// ����ĳ��ֵ���������е��±�
int find_index(int *, int);

int main(void)
{
	int nums[] = {1, 2, 34, 44, 55, 3};
	int searchNum;  // Ҫ���ҵ�����

	count = sizeof(nums) / sizeof(nums[0]);  // ��ȡ���鳤��
	printf("������Ҫ���ҵ����֣�");
	scanf("%d", &searchNum);

	// ���ú�������ȡ�±�
	int index = find_index(nums, searchNum);
	printf("���������ֵ��±꣺%d\n", index);

	return (0);
}

/** �����±꣬û�ҵ�����-1 */
int find_index(int *p, int num)
{
	int index = -1, i = 0;  // �����±��ѭ������

	// ѭ�����ң�����ҵ��ͱ����±�
	for (; i < count; i++)
	{
		if (*(p + i) == num)
		{
			index = i;
			break ;
		}
	}

	// ���û���ҵ�����ôindex��ֵΪ-1
	return (index);
}
