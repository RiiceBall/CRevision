#include "hero.h"

// ����Ӣ������
// ��һ���㹻��Ŀռ䣬��Ϊ��������ǲ����޸ĵ�
Hero heros[100] = {
	{"Ӱ��֮����", 'm', "�̿�", 579, 0.644, "λ��", {2012, 8, 15}},
	{"��ɪ��Ů���", 'f', "��ʦ", 482, 0.644, "����", {2010, 9, 20}},
	{"���罣������", 'm', "սʿ", 517, 0.67, "���ܡ�λ��", {2013, 12, 23}}
};

int count = 3;  // ��ǰӢ����

// ��̬¼������
void input(void)
{
	// ����¼������
	// ��һ��¼����Ϻ�ѯ���Ƿ����¼�룿
	char answer = 'y';  // �û��ش�
	do {
		// ���Ӣ�����Ƿ�Ϊ��
		if (count == 100)
		{
			printf("Ӣ�۵���λ�������뵽��Ϸ�̳ǹ���");
			break ;  // ����¼��
		}

		printf("\n��ǰ¼���%dλӢ�۵���Ϣ��\n", count + 1);
		printf("Ӣ�����ƣ�");
		heros[count].name = (char*)malloc(sizeof(char) * 50);  // ����ռ�
		scanf("%s", heros[count].name);

		printf("�Ա�");
		fflush(stdin);
		heros[count].sex = getchar();
		fflush(stdin);

		printf("ְҵ��");
		heros[count].job = (char*)malloc(sizeof(char) * 50);  // ����ռ�
		scanf("%s", heros[count].job);

		// �����������ֶ���ֵ
		heros[count].life = 1000;
		heros[count].speed = 0.655;
		heros[count].abillity = "���졢���";
		heros[count].pub_time.year = 2018;
		heros[count].pub_time.month = 10;
		heros[count].pub_time.day = 31;

		count++;  // ¼����Ϻ�Ӣ����+1

		printf("�Ƿ����¼��Ӣ�۵���Ϣ��(y/n)");
		answer = getch();  // �û����¼������̾ͽ����ַ�������Ҫ�ȴ��س�

	} while (answer == 'y' || answer == 'Y');  // ����û��ش����y�Ļ��ͼ���
}

// ����ƽ������ֵ
void show_avg(void)
{
	int life_sum = 0;  // Ѫ��֮��
	double avg = 0;    // ƽ��ֵ
	int i;

	// ѭ��ȫ��Ӣ��
	for (i = 0; i < count; i++)
	{
		life_sum += (heros + i)->life;  // �ۼ�ȫ��Ӣ��Ѫ��
	}

	// ����ƽ��ֵ
	avg = life_sum * 1.0 / count;
	printf("����ֵ��ƽ��ֵΪ��%.2lf\n", avg);
}

// ��ʾӢ�۵���ϸ��Ϣ
void show(void)
{
	int i;
	// ��ӡӢ������
	printf("\n");
	for (i = 0; i < count; i++)
	{
		printf("%s\t%s\t%d-%d-%d\n", (heros + i)->name, heros[i].job,
				heros[i].pub_time.year, heros[i].pub_time.month, heros[i].pub_time.day);
	}
}
