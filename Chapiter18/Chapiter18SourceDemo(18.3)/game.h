#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

/*******************************************************
 * �ļ�����game.h
 * ��  ��������������Ϸ��һЩ���Ľṹ�ͺ���
 * �����ˣ��Ͼ�ѧ�û�Ա4.0������
 * ��  �ڣ�2018-10-29
 * ��  ����1.0
 * ��  ����http://www.xuetang9.com
 * �ٷ�QQ��614940318���Ͼž���
 ******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

/***************** ��Ϸ�Ľṹ���Ͷ��� *****************/
// ����ȫ�����������X��Y��
int X, Y;

// ��ҡ���ͼ��װ��������

/** ��Ϸ��ͼ�ṹ - ��š����ơ���ҵĽ���ȼ������ꡢ���� */
typedef struct _map {
	int id;               // ��ͼ���
	char name[50];        // ��ͼ����
	int min_level;        // ��ҽ������͵ȼ�
	// ����ṹCOORD
	COORD coord;          // ��ͼ������
	char desc[500];       // ��ͼ����
}Map;

/** ��Ϸ��������ö�� - ���������ߡ�����Ʒ����Ƭ����Ƭ */
typedef enum _proptype {
	weapon, armor, consumables, card, fragment
}Proptype;

/** ��Ϸ���ߣ���ұ����� - ���������ߡ�����Ʒ����Ƭ����Ƭδʵ�� */
typedef struct _prop {
	int id;               // ���߱��
	char name[50];        // ��������
	int level;            // ���߼���
	int stock;            // ���߿�����ұ����еĵ�������
	double price;         // ���ߵ���
	Proptype type;        // ��������
	union {               // ���� - ��ѡһ
		int min_attack;   // ������������Ͷ�Ӧ��С������
		int min_defense;  // ����Ƿ��ߣ��Ͷ�Ӧ��С������
		int min_power;    // ���������Ʒ���Ͷ�Ӧ������С����ֵ��Ѫƿ��ӦѪ���ȵȣ�
	};
	union {               // ���� - ��ѡһ
		int max_attack;   // ������������Ͷ�Ӧ��󹥻���
		int max_defense;  // ����Ƿ��ߣ��Ͷ�Ӧ��������
		int max_power;    // ���������Ʒ���Ͷ�Ӧ�����������ֵ��Ѫƿ��ӦѪ���ȵȣ�
	};
	char desc[200];       // ���߹�������
}Prop;

void init(void);          // ��ʼ����Ϸ����
void show(void);          // ��ʾȫ������

/** ��ʾ��Ϸ��ӭ��Ϣ */
void show_welcome(void);

/** ��ʾ��Ϸ��ͼ */
void show_map(void);

/** ��ʾ��Ϸ��ͼ�·�����Ϸ��Ϣ */
void show_information(void);

/** ��ʾ��Ϸ���˵� */
void show_main_menu(void);

#endif // GAME_H_INCLUDED
