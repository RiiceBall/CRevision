#include <stdio.h>
#include <stdlib.h>
#include "hotel.h"

// ʹ�������ļ��е�ȫ�ֱ���
extern char hotel_names[4][50];

int main(void)
{
	// �û�������ס�Ƶ������������������Ӧ�Ľ��

	int choice; // �û���ѡ��

	// 1����ʾ�˵� - ��װ�ɺ���
	choice = menu();

	// ���ѡ���Ƿ���1~4
	if (choice > 0 && choice < 5)
	{
		printf("��ǰ�û�ѡ�����%s\n", hotel_names[choice - 1]);
	}

	// 2���������

	return (0);
}
