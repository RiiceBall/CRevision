#include <stdio.h>
#include <stdlib.h>

// ���սṹ��
struct Birth
{
	int year;   // ��
	int month;  // ��
	int day;    // ��
};

// ��Ӣ�����ݽṹ���������սṹ
struct Hero
{
	char *name;          // Ӣ�۵�����
	int level;           // Ӣ�۵ĵȼ�
	struct Birth birth;  // Ӣ�۵�����
	char *job;           // Ӣ�۵�ְҵ
	char *skill;         // Ӣ�۵ļ���
}jackie_chan;

int main(void)
{
	// ֱ��ʹ�ô��������Ƕ���ı���
	// �������ո�ֵ
	jackie_chan.name = "Jackiechan";
	jackie_chan.birth.year = 1954;
	jackie_chan.birth.month = 4;
	jackie_chan.birth.day = 7;

	printf("%s������Ϊ��%d��%d��%d��\n", jackie_chan.name,
			jackie_chan.birth.year, jackie_chan.birth.month, jackie_chan.birth.day);

	// ��ʼ��һ���ṹ���еĽṹ���������Ҫ��{}
	struct Hero laola = {"����", 28, {1998, 5, 4}, "����ѧ��", "������"};

	// ����һ��ָ��laola��ָ��
	struct Hero *ptr_laola = &laola;

	printf("%s������Ϊ��%d��%d��%d��\n", laola.name,
			laola.birth.year, laola.birth.month, laola.birth.day);

	// ʹ��ָ��������ݽṹ����ı��������ַ�ʽ���ڶ����÷��Ƚ��ձ飩
	printf("%s\n", (*ptr_laola).name);
	printf("%s\n", ptr_laola->name);

	return (0);
}
