#ifndef HERO_H_INCLUDED
#define HERO_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

// ʱ��ṹ��
typedef struct _my_time
{
	int year;           // ��
	int month;          // ��
	int day;            // ��
}My_time;

// Ӣ�۽ṹ��
typedef struct _hero
{
	char *name;         // Ӣ������
	char sex;           // Ӣ���Ա�
	char *job;          // Ӣ��ְҵ
	int life;           // Ӣ������ֵ
	double speed;       // �����ٶ�
	char *abillity;     // ��������
	My_time pub_time;   // ����ʱ��
}Hero;

// ����ƽ������ֵ
void show_avg(void);

// ��̬¼������
void input(void);

// ��ʾӢ�۵���ϸ��Ϣ
void show(void);

#endif // HERO_H_INCLUDED
