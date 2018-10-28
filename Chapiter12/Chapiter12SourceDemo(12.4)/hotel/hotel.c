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
int Menu(void)
{
	int choice; // �û���ѡ��
	int result; // �û������Ľ���ж� 0 ��ʾ�Ƿ���1��ʾ��
	int i;      // ѭ������

	printf("��ѡ����ס�ľƵ꣺\n");
	for (i = 0; i < 4; i++)
	{
		printf("%d��%s\n", i + 1, hotel_names[i]);
	}
	printf("5���˳�����\n");
	printf("����������ѡ��");

	// ���û������ֵ���Ϸ�ʱ��Ҫ���������룬������û����ʱscanf�᷵��1
	while((result = scanf("%d", &choice)) != 1 || choice < 1 || choice > 5)
	{
		if(result != 1)     // ����û�����Ĳ�����������
		{
			scanf("%*s");   // ������������������롣*��ʾ�������ڶ���󲻸�ֵ����Ӧ�ı���
			fflush(stdin);  // ��ջ�����
			// ��������Ч����ͬ
		}
		printf("��������1-5֮���������");
	}

	return (choice);
}

/** �����û�Ԥ�������� */
int Get_nights(void)
{
	int nights;  // �û���ס������

	printf("����/Ůʿ��������Ҫ��ס��������");
	while(scanf("%d", &nights) != 1)
	{
		scanf("%*s");  // ȡ����ֵ
		printf("��������ȷ��������������������\n");
		printf("����/Ůʿ��������Ҫ��ס��������");
	}
	return (nights);
}

/** ��ʾ�ܽ�� */
void Show_price(int nights, double price)
{
	// �ܼ۸�=�ۼ�ǰһ���95%
	double total = 0;
	int i;

	for (i = 0; i < nights; i++)
	{
		total += price;
		price = price * DISCOUNT;  // 0.95
	}
	printf("��ס%d�죬�����ѣ���%.2lf\n", nights, total);
}
