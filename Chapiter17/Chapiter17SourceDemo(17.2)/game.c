#include "game.h"

// �����������
Prop prop_array[] = {
	{1, "�ۻ����ҽ�", 1, 5, 5000, weapon, .min_attack=1, .max_attack=4, "�Ϲ���������ù��ı�����"},
	{2, "����֮��", 2, 5, 10000, armor, .min_defense=2, .max_defense=6, "ȡ����֮�����������˺���"},
	{3, "��Һ����", 3, 5, 15000, consumables, .min_power=100, .max_power=500, "��һ��ϵ�������Ʒ����ĸ���ﶼ˵�ã�"}
};

/** ��ʼ����Ϸ���� */
void init(void)
{

}

/** ��ʾȫ������ */
void show(void)
{
	// ��ȡ��������Ĵ�С
	int prop_count = sizeof(prop_array) / sizeof(Prop);
	int i;

	// ��ӡ����������Ϣ
	printf("���\t����\t\t�۸�\n");
	for (i = 0; i < prop_count; i++)
	{
		printf("%d\t%s\t%.0lf\n", prop_array[i].id, prop_array[i].name, prop_array[i].price);

		// ���ݵ������ʹ�ӡ
		switch (prop_array[i].type)
		{
			case weapon:       // ��������
				printf("��С��������%d\t��󹥻�����%d\n", prop_array[i].min_attack, prop_array[i].max_attack);
				break ;
			case armor:        // ��������
				printf("��С��������%d\t����������%d\n", prop_array[i].min_defense, prop_array[i].max_defense);
				break ;
			case consumables:  // ����Ʒ����
				printf("��С����ֵ��%d\t�������ֵ��%d\n", prop_array[i].min_power, prop_array[i].max_power);
				break ;
		}
	}
}