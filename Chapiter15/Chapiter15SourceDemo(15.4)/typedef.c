#include <stdio.h>
#include <stdlib.h>

// ʹ��typedef��������������ʱ��������������
typedef struct Hero
{
	char *name;  // Ӣ�۵�����
	int age;     // Ӣ�۵�����
	char *job;   // Ӣ�۵�ְҵ
	char *skill; // Ӣ�۵ļ���
}Hero;

// Ҳ�����޸�������������
typedef unsigned char Byte;  // ��unsigned char��ΪByte

int main(void)
{
	// ���Խ�typedef���Ϊ����

	// ʹ�ã�
	Hero hero = {"١����", 35, "�ƹ��", "�������"};
	// ���û��typedef���ǣ�
	// struct Hero hero = {"١����", 35, "�ƹ��", "�������"};

	// ����һ��unsigned char���͵ı���
	Byte bt_value_1;

	return (0);
}
