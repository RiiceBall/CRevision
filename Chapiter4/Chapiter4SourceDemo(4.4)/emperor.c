#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// do-whileѭ������

	int choice;  // �û���ѡ��

	while (1)
	{
		// ��ӡ��Ϸ�˵�
		printf("�Ը���ԣ�\n");
		printf("�������һλ�������������Եİ�����ϣ����\n");
		printf("1��ֻҪ��һλ�氮�����ӡ�\n");
		printf("2��������λ���ϵİ��ˡ�\n");
		printf("3��ӵ����ǧ������\n");

		do{	// ���������󣬽���һֱѭ������
			printf("��ѡ��");
			scanf("%d", &choice);
			if (choice <= 0 || choice > 3)
			{
				printf("ֻ������1-3֮������֣����������룺\n");
			}
		}while (choice <= 0 || choice > 3);	// ˼����choiceʲôֵ��ʱ��ִ��ѭ����

		// ���ִ�е������֤���û�����������ȷ�ģ���1-3֮��
		switch (choice)
		{
		case 1:
			printf("��ѡ���������е�Ψһ��Ȼ���Ͼž��Ѿ�������һ�У�\n");
			break;
		case 2:
			printf("������Ĵ��ܲ���\n");
			break;
		case 3:
			printf("����磬10Ԫһ�������㻦���ʣ�\n");
			break;
		}
	}

	return 0;
}
