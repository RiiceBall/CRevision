#include <stdio.h>
#include <stdlib.h>

// Ӣ�۽ṹ
struct Hero {
	char *name;   // Ӣ�۵�����
	int level;    // Ӣ�۵ĵȼ�
	char *job;    // Ӣ�۵�ְҵ
	char *skill;  // Ӣ�۵ļ���
};

int main(void)
{
	// ����һ��Ӣ��
	struct Hero jackie_chan;

	// �����Ӣ�۸�ֵ
	jackie_chan.name = "JackieChan";  // ָ��ĺô��ǿ���ֱ��ָ��ĳ������
	jackie_chan.level = 25;
	jackie_chan.job = "սʿ";
	jackie_chan.skill = "��ȭ";

	// ָ��Ļ����Ƕ�̬��ֵʱ�����ȸ����ռ�
	jackie_chan.name = (char*)malloc(sizeof(char) * 50);
	printf("������һ�����ƣ�");
	scanf("%s", jackie_chan.name);

	printf("%s\t%d\t%s\t%s\n", jackie_chan.name, jackie_chan.level, jackie_chan.job, jackie_chan.skill);

	// �ǵ���շ���ռ䣡
	free(jackie_chan.name);

	return (0);
}
