#include <stdio.h>
#include <stdlib.h>

// �ṹ���͵������Ϊ�ṹ����
// ����һ����ɫ�ṹ
struct Role
{
	char *name;  // ����
	int age;     // ����
	char *job;   // ְλ
	char *skill; // �س�
}roles[25];  // ������һ��25��С�Ľṹ�������
// struct Role roles[25];

// ����ֱ�Ӹ�ֵ
struct Role1
{
	char *name;  // ����
	int age;     // ����
	char *job;   // ְλ
	char *skill; // �س�
}roles1[] = {
	{"��ܽ��", 29, "���ӵ�", "��ɽ����"},
	{"�����", 30, "�˷�", "������Ի��"}
};  // ֱ�Ӹ�ֵ

int main(void)
{

	return (0);
}
