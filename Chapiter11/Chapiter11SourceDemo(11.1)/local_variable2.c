#include <stdio.h>
#include <stdlib.h>

int *get_nums(void)
{
	// nums�ֲ�����
	int nums[] = {1, 2, 3, 4, 5};

	// ����ִ�����ʱ�����Զ����ٺ����ڲ�����ı���
	return (nums);
}

int main(void)
{
	int *nums = get_nums();
	int i = 0;

	for (i = 0; i < 5; i++)
	{
		printf("%d\n",*(nums+i)); // ��ӡ�����Ϊget_nums�е�nums��ֵ
	}

	return (0);
}
