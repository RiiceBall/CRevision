#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// ʹ��ѭ��ʵ������������������˳�ϵͳ

	int i = 0;      // ѭ������
	int password;   // ����

	while(i < 3)
	{
		printf("���������룺");
		scanf("%d",&password);

		if (123456 != password)
		{
			printf("����������󣬵�ǰ�����%d�����롣\n", i + 1);
		}
		else
		{
			printf("����������ȷ���˳���½ҳ�档");
			break;
		}

		// ������������󣬾�Ҫǿ���˳�ϵͳ
		if (i == 2)
		{
			printf("��������������Σ�ϵͳǿ���˳���\n");
			exit(0);    // ���߲���ϵͳ��ϵͳ�����˳�
		}
		i++;
	}

	return (0);
}
