#include "hero.h"

// ����Ӣ������
Hero heros[] = {
	{"Ӱ��֮����", 'm', "�̿�", 579, 0.644, "λ��", {2012, 8, 15}},
	{"��ɪ��Ů���", 'f', "��ʦ", 482, 0.644, "����", {2010, 9, 20}},
	{"���罣������", 'm', "սʿ", 517, 0.67, "���ܡ�λ��", {2013, 12, 23}}
};

// ��ʾӢ�۵���ϸ��Ϣ
void show(void)
{
	// ���֪���ṹ����Ĵ�С�أ�
	int len = sizeof(heros) / sizeof(Hero);

	// ����Ԫ��ʹ��ָ��ʱ����̬��ֵ��Ҫ���ȷ����ڴ�
	printf("���������ƣ�");
	heros[0].name = (char*)malloc(sizeof(char) * 50); // char name[50];
	scanf("%s", heros[0].name);

	int i;
	// ��ӡӢ������
	for (i = 0; i < len; i++)
	{
		printf("%s\t%s\t%d-%d-%d\n", (heros + i)->name, heros[i].job,
				heros[i].pub_time.year, heros[i].pub_time.month, heros[i].pub_time.day);
	}
}
