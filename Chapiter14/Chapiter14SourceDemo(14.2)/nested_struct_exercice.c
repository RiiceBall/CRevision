#include <stdio.h>
#include <stdlib.h>

// 门派
struct Martial
{
	int id;         // 门派编号
	char name[50];  // 门派名称
	int count;      // 门派的人数
	int type;       // 门派的类别 - 1正派，2中立，3邪派
};

// 玩家
struct Player
{
	int id;         // 玩家编号
	char name[50];  // 玩家名称
	char pass[50];  // 玩家的登陆密码
	char sex;       // 玩家性别
	struct Martial martial;    // 玩家所属门派
};

int main(void)
{
	// 玩家Player
	// 玩家有所属门派（种族、阵营）
	struct Player player = {1, "和尚洗头用飘柔", "123456", 'f', {1, "洛克萨斯", 500, 3}};

	printf("%s\t%s\n", player.name, player.martial.name);

	return (0);
}
