#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double attack = 57.88;      // 伤害值
	double attack_add = 4.5;    // 伤害增加值
	int attack_range = 172;     // 攻击距离

	// 使用变量代替伤害值、伤害增加值和攻击距离
	// 这让我们以后修改这些值更加的方便，还能重复使用在不同的地方
	printf("名称：德玛西亚之力·盖伦\n");
	printf("伤害：%.2lf(+%.1lf)\t攻击距离：%d\n", attack, attack_add, attack_range);
	printf("护甲：27.536(+3.0)\t魔    抗：32.1(+1.25)\n");
	printf("生命：616.28(+84.25)\t生命回复：7.84(+0.5)\n");
	printf("法力：0.0(+0.0)\t\t法力回复：0.0(+0.0)\n");
	printf("移速：340\t\t定    位：上单 辅助 打野\n");
	printf("点券：450\t\t金    币：1000\n");

	return (0);
}
