#include <stdio.h>
#include <stdlib.h>

// ����
struct Martial
{
	int id;         // ���ɱ��
	char name[50];  // ��������
	int count;      // ���ɵ�����
	int type;       // ���ɵ���� - 1���ɣ�2������3а��
};

// ���
struct Player
{
	int id;         // ��ұ��
	char name[50];  // �������
	char pass[50];  // ��ҵĵ�½����
	char sex;       // ����Ա�
	struct Martial martial;    // �����������
};

int main(void)
{
	// ���Player
	// ������������ɣ����塢��Ӫ��
	struct Player player = {1, "����ϴͷ��Ʈ��", "123456", 'f', {1, "�����˹", 500, 3}};
	struct Player player2 = {2, "Dm_7", "123456", 'm', {1, "�ع���", 500, 3}};
	struct Player *ptr_player2 = &player2;  // ����һ��ָ��player2��ָ��

	printf("%s\t%s\n", player2.name, player2.martial.name);

	// ʹ��ָ��������
	printf("%s\t%s\n", (*ptr_player2).name, (*ptr_player2).martial.name);
	printf("%s\t%s\n", ptr_player2->name, ptr_player2->martial.name);

	return (0);
}
