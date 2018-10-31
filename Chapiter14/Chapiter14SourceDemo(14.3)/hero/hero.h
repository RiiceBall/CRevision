#ifndef HERO_H_INCLUDED
#define HERO_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

// �ṹ�壺ְҵ��Ӣ��������ʱ�䡢Ӣ��
typedef struct _job
{
	int id;             // ְҵ���
	char *name;         // ְҵ����
	char *desc;         // ְҵ������
}Job;
//Job job;              // �򻯽ṹ���ʹ��

typedef struct _abillity
{
	int id;             // �����������
	char *name;         // ������������
	char *intro;        // ����������˵��
}Abillity;

typedef struct _pub_time
{
	int year;           // ��
	int month;          // ��
	int day;            // ��
}Pub_time;

typedef struct _hero
{
	int id;             // Ӣ�۱��
	char *name;         // Ӣ������
	char sex;           // Ӣ���Ա�
	Job job;            // Ӣ�۵�ְҵ
	double hp;          // Ӣ�۵�����ֵ
	double speed;       // �����ٶ�
	Abillity abillity;  // ��������
	Pub_time pub_time;  // ����ʱ��
}Hero;

// ����Ӣ�۵�ֵ
void input_hero(void);

// ���Ӣ�۵�ֵ
void show_hero(void);

#endif // HERO_H_INCLUDED
