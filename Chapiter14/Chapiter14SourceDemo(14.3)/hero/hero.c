#include "hero.h"

// ����Ӣ�۱���
Hero heros[5];

// ����ְҵ����
Job jobs[] = {
	{1, "��ʦ", "biubiubiuר��"},
	{2, "�̿�", "ǧ��ɱר��"},
	{3, "սʿ", "�ҵ����ر��"},
	{4, "����ʦ", "�����׳Է�"},
	{5, "����", "����ָ�ģ�"},
};

// ����Ӣ�۵�ֵ
void input_hero(void)
{
	int job_choice;  // ְҵѡ��

	// ��̬¼��
	int i, j;
	for (i = 0; i < 1; i++)
	{
		printf("�������%dλӢ�۵���Ϣ��\n", i + 1);
		heros[i].id = i + 1;

		printf("���ƣ�");
		heros[i].name = (char*)malloc(50);
		scanf("%s", heros[i].name);

		printf("�Ա�");
		fflush(stdin);
		scanf("%c", &heros[i].sex);
		fflush(stdin);  // ���õ�ϰ�ߣ�¼���ַ���ǵ���ջ�����

		// ���õ��û����飺�趨һ��ְҵ���飬���û�ѡ�񼴿�
		for (j = 0; j < 5; j++)
		{
			printf("%s\n", jobs[j].name);
		}

		printf("��ѡ��ְҵ��(1-5֮�������) ");
		scanf("%d", &job_choice);
		heros[i].job = jobs[job_choice - 1];

		printf("%s��ǰ��ְҵ����%s��\n", heros[i].name, heros[i].job.name);
	}
}

// ���Ӣ�۵�ֵ
void ShowHero(void)
{

}
