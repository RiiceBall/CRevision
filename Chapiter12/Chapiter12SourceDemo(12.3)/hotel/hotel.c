// ��Ӧhotel.h��ʵ���ļ�

// ʹ��<>ʱ�������ϵͳĿ¼
#include <stdio.h>
#include <stdlib.h>
// �����Զ���ͷ�ļ�ʱ��ʹ��˫����
// ʹ��˫����ʱ�����ҵ�ǰĿ¼
#include "hotel.h"

// �Ƶ�����
char hotel_names[4][50] = {
    "���޾Ƶ�", "�������㳡�Ƶ�", "��˹ͼ����˹�����������Ƶ�", "˹���ﲼ�����ؾƵ�"
};

/** �˵����� */
int menu(void)
{
	int choice; // �û���ѡ��
	int i;      // ѭ������

	printf("��ѡ����ס�ľƵ꣺\n");
	for (i = 0; i < 4; i++)
	{
		printf("%d��%s\n", i + 1, hotel_names[i]);
	}
	printf("5���˳�����\n");
	printf("����������ѡ��");
	scanf("%d", &choice);
	// 1���û���ѡ�����Ƿ�����
	// 2���û���������1-5֮��

	return (choice);
}
