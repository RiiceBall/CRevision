#ifndef HERO_H_INCLUDED
#define HERO_H_INCLUDED

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
	char job[20];       // Ӣ��ְҵ
	int life;           // Ӣ������ֵ
	double speed;       // �����ٶ�
	char abillity[20];  // ��������
	My_time pub_time;   // ����ʱ��
}Hero;

// ��ʾӢ�۵���ϸ��Ϣ
void show(void);

#endif // HERO_H_INCLUDED
