#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
	ģ��ʵ�ֵ��ߵ깺�﹦�ܣ��̵���ʱֻ֧��һ�����͵���Ʒ��
	1����Ʒ�ṹ-���ơ����ۡ������������
	2�������ṹ-��ұ�š���Ʒ[10]��������������������
	3����ҽṹ-��š����ơ����롢��Ǯ��[����]
	ģ����ҹ�����Ϸ����
	1�����ѡ��Ҫ����ĵ���
	2�����ͬ�⽻�׺�۳���Ӧ��Ϸ��
	3����Ӧ��Ʒ���-1
	4����ұ�����������Ʒ�����Ʒ����+1
*/

/** ��Ʒ�ṹ */
typedef struct _prop {
	int id;          // ���ߵ�Ψһ���
	char name[50];   // ��������
	double price;    // ���ߵ���
	int stock;       // �����������ڱ����У���ʾ�˵��ߵĵ�������
	char desc[200];  // ���ߵĹ�������
}Prop;

/** �����ṹ */
typedef struct _bag {
	int player_id;   // ������ҵı��
	int prop_count;  // ��ǰ�����У����ߵ�����
	int prop_max;    // ��ǰ�����Ĳ������ - ��������������û���rmb����
	Prop props[8];   // ��ǰ�����еĵ������飬��ʱ����Ϊ8
}Bag;

/** ��ҽṹ */
typedef struct _player {
	int id;          // ��ұ��
	char name[50];   // �û���/�ǳ�
	char pass[50];   // ����
	Bag bag;         // ��ҵı���
	double gold;     // ��ҽ�� - ������ʾ�����Խ�10wͭ��ת�������ҡ������ʾ
	double sycee;    // Ԫ������
}Player;

Prop *props;            // ָ����������ָ��
Player *players;        // ָ����������ָ��
int props_count = 0;    // ���������С
int players_count = 0;  // ��������С

// ������ʼ����Ϸ����
void init(void);

// ��ӡ����
void show_props(void);

// ��ӡ���
void show_players(void);

/*
 * ���׺���
 * ����1�����뽻�׵����ָ�� - Ϊ�˷����޸���ҽ��׺�Ľ����
 * ����2����ҹ������Ʒid
 */
void trade(Player *player, int prop_id);

int main(void)
{
	// ��ʼ����Ϸ����
	init();
	printf("\n*****************����ǰ*****************\n");
	// ��ӡ��Щ��ʼ������
	show_props();
	show_players();

	// ���н���
	trade(&players[0], 3);
	trade(&players[1], 3);
	trade(&players[3], 4);
	trade(&players[0], 3);
	trade(&players[2], 5);
	trade(&players[0], 3);
	trade(&players[1], 2);
	trade(&players[0], 5);
	trade(&players[2], 4);
	trade(&players[0], 3);
	trade(&players[1], 3);
	trade(&players[0], 3);
	trade(&players[2], 3);
	trade(&players[3], 3);
	trade(&players[0], 5);

	printf("\n*****************���׺�*****************\n");
	show_props();
	show_players();

	return (0);
}

/**
 * ���׺���
 * ����1�����뽻�׵����ָ�� - Ϊ�˷����޸���ҽ��׺�Ľ����
 * ����2����ҹ������Ʒid
 */
void trade(Player *player, int prop_id)
{
    // ��Ҫ�жϣ���Ʒ�Ŀ�棬�������������ұ����ռ乻����

    int i;
    Prop *trade_prop = NULL;  // Ҫ�������Ʒָ��

    // ������Ʒ
    for (i = 0; i < props_count; i++)
	{
		if (prop_id == props[i].id) {
			trade_prop = &props[i];  // trade_prop = props + i;
			break ;
		}
	}

	// �����Ʒ���
	if (trade_prop->stock <= 0)
	{
		printf("�����Ҷ�û���������̵궼���������\n");
		return ;
	}

	// ���������
	if (player->gold < trade_prop->price)
	{
		printf("Ǯ�����Ǳ�ģ�������ǿ�Ǯ����ᣡ\n");
		return ;
	}

	// ��鱳���ռ�
	if (player->bag.prop_count >= player->bag.prop_max && player->bag.prop_count != 0)
	{
		printf("��������������ʧ�ܣ�\n");
		return ;
	}

	// ���㽻��������ִ�н��׵�ҵ�����
	// 1����Ʒ���-1
	trade_prop->stock--;

	// 2����ҽ��-��Ʒ����
	player->gold -= trade_prop->price;

	// 3����ұ�����������
	// �ж���ұ������Ƿ����и���Ʒ

	// ����и���Ʒ�������еĸ���Ʒ����+1
	for (i = 0; i < player->bag.prop_count; i++)
	{
		// ���Ҫ�������Ʒid�������е�ĳ����Ʒid��ͬ
		if (prop_id == player->bag.props[i].id)
		{
			player->bag.props[i].stock++;
			break ;
		}
	}

	// ���û�и���Ʒ������Ʒ��ӵ������м���
	if (i == player->bag.prop_count)
	{
		// �뱳���д���һ����Ʒ-����һ��Ҫ���׵���Ʒ��Ϣ��������
		int new_index = player->bag.prop_count;
		player->bag.props[new_index].id = trade_prop->id;
		player->bag.props[new_index].price = trade_prop->price;
		player->bag.props[new_index].stock = 1;
		strcpy(player->bag.props[new_index].name, trade_prop->name);
		strcpy(player->bag.props[new_index].desc, trade_prop->desc);
		player->bag.prop_count++;
	}
}

/** ��ʼ������ */
void init(void)
{
	// ��������
	static Prop prop_array[] = {
		{1, "˫�����鿨", 3000, 10, "˫��666"},
		{2, "���õĵ���", 5000, 8, "ֻ��Զ�۲������棡"},
		{3, "���������", 8000, 10, "����ר��"},
		{4, "�޼���", 13000, 5, "��ǹ���룬ˮ����"},
		{5, "ֱ��һ����", 83000, 10, "�����Ժ�׼�����ٳ��ٳ��ٳԡ�����"}
	};
	props_count = sizeof(prop_array) / sizeof(Prop);  // ���������С
	props = prop_array;      // �趨ָ���ָ��

	// �������
	static Player player_array[] = {
		{1, "����ëë��", "123456", .gold=5000000, .bag.prop_max=8},
		{2, "���ް�����", "123456", .gold=150000, .bag.prop_max=8},
		{3, "Ԫʼ����֮ͽ", "123456", .gold=500000, .bag.prop_max=8},
		{4, "�Ǻ�", "123456", .gold=1150000, .bag.prop_max=8}
	};
	players_count = sizeof(player_array) / sizeof(Player);  // ���������С
	players = player_array;  // �趨ָ���ָ��
}

/** ��ʾ�������� */
void show_props(void)
{
	int i;

	// ����Ƿ�ָ������
	if (props == NULL) return ;

	printf("%-5s%-14s%-7s\t���\t��Ʒ����\n", "���", "����", "����");
	for (i = 0; i < props_count; i++)
	{
		printf("%-5d%-14s%-7.0lf\t%d\t%s\n", props[i].id, props[i].name, props[i].price, props[i].stock, props[i].desc);
	}
}

/** ��ʾ������� */
void show_players(void)
{
	int i, j;

	// ����Ƿ�ָ������
	if (players == NULL) return ;

	printf("���\t%-14s���\n", "����");
	for (i = 0; i < players_count; i++)
	{
		printf("%d\t%-14s%.0lf\n", players[i].id, players[i].name, players[i].gold);

		// ��ӡ��ҵı���
		for (j = 0; j < players[i].bag.prop_count; j++)
		{
			printf("\t%s\t%d\t", players[i].bag.props[j].name, players[i].bag.props[j].stock);
		}
		printf("\n");
	}
}
