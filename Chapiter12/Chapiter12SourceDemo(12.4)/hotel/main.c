#include <stdio.h>
#include <stdlib.h>
#include "hotel.h"

// ʹ�������ļ��е�ȫ�ֱ���
extern char hotel_names[4][50];

int main(void)
{
	// �û�������ס�Ƶ������������������Ӧ�Ľ��

	int choice;         // �û���ѡ��
	int nights;         // �û���ס������
	double curr_cost;   // �û���ǰ��ס�Ƶ�ķ��ѵ���

	while ((choice = Menu()) != 5)
	{
		switch (choice)
		{
			case 1:  // �û���ס��һ�ҾƵ�
				curr_cost = HOTAL1;
				break ;
			case 2:  // �û���ס�ڶ��ҾƵ�
				curr_cost = HOTAL2;
				break ;
			case 3:  // �û���ס�����ҾƵ�
				curr_cost = HOTAL3;
				break ;
			case 4:  // �û���ס���ļҾƵ�
				curr_cost = HOTAL4;
				break ;
			default:
				curr_cost = 0;
		}

		// �õ��û���ס������
		nights = Get_nights();

		// �����ܷ���
		Show_price(nights, curr_cost);
	}
	printf("��лʹ�ñ�ϵͳ���ٻᣡ\n");

	return (0);
}
