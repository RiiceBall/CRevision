#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Ӣ�۽ṹ
struct Hero
{
	int id;          // Ӣ�۵ı��
	char name[50];   // Ӣ�۵�����
	int level;       // Ӣ�۵ĵȼ�
	int hp;          // Ӣ�۵�Ѫ��
	int mp;          // Ӣ�۵�ħ��ֵ
	char skill[50];  // Ӣ�۵ļ���
};

int main(void)
{
	// ʹ�ýṹ��
	// ���ָ�ֵ��ʽ
	// һ������ֵ
	struct Hero hero1;
	hero1.id = 1;
	strcpy(hero1.name, "��������֮��");
	hero1.level = 5;
	hero1.hp = 500;
	hero1.mp = 100;
	strcpy(hero1.skill, "�󱣽�");
	printf("%d\t%-11s\t%d\t%d\t%d\t%s\n", hero1.id, hero1.name, hero1.level, hero1.hp, hero1.mp, hero1.skill);

	// һ���Ը�ֵ
	struct Hero hero2 = {2, "����ɩ", 10, 1000, 200, "������"};
	printf("%d\t%-11s\t%d\t%d\t%d\t%s\n", hero2.id, hero2.name, hero2.level, hero2.hp, hero2.mp, hero2.skill);

	// һ���Ը�ֵ����ĳ��������������mp��
	// ��������ĳ������֮��ı�����Ҫ���ϱ�����
	// û��ֵ�������Զ�Ϊ0��û��ֵ���ַ����Զ�Ϊ��
	struct Hero hero3 = {3, "����", 15, 1500, .skill="����֮��"};
	printf("%d\t%-11s\t%d\t%d\t%d\t%s\n", hero3.id, hero3.name, hero3.level, hero3.hp, hero3.mp, hero3.skill);

	return (0);
}
