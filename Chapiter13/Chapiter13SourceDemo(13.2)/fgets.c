#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	char names[50] = "jack";

	printf("�����������ƣ�");
	fgets(names, 10, stdin);  // �ӱ�׼�������ж�ȡ10-1���ֽڵ�����names��
	// ע�⣺fgets��Ĭ�ϸ����һ��Ԫ������Ϊ\n
	printf("%s", names);
	printf("=======================\n");

	printf("����names2�е����ݣ�\n");
	for (i = 0; i < 50; i++)
	{
		// ��ӡÿ���ַ���ASCII��
		printf("%d\n", names[i]);
	}

	return (0);
}
