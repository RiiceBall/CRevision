#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// switch case��������
	// ���ȣ�����case 2 ����Ѱ�����һ��case 2 ��Ϊcase 3��
	// û��break�������ж��˳�

	int ex = 1; // int ex = 7;
	switch (ex)
	{
		case 1:
			printf("�����˽��ʱ���\n");
		case 2:
			printf("ʳ��ħ��ʦ���ʱ���\n");
		case 2:
			printf("�ػ���ͭ�ʱ���\n");
		case 4:
			printf("�ֶ���ʿľ�ʱ���\n");
		default:
			printf("û���κν���\n");
	}

	return (0);
}
