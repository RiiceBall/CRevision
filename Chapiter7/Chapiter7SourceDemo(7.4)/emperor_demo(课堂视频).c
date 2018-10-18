#include <stdio.h>
#include <stdlib.h>
#include <string.h>         // ֧���ַ�������
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "Winmm.lib")

#define MAX 6      // ����MAX��ʾϵͳҪ��������������

int main(void)
{
	// ʹ���ַ������ʾ�ַ���
	int i, j, temp;                 // ѭ����������ʱ���ͱ���
	int count = 5;                  // ��ǰδ�����乬����������
	int choice;                     // �ʵ۵�ѡ��1-4֮��
	int search_index = -1;          // ������Ų���Ԫ�ص��±�
	char emperor_name[50];          // �ʵ۵�����
	char temp_name[20];             // ���������ʱ�ַ������ַ�����

	// ����������
	char names[MAX][20] = {"����", "����", "��֪����", "��ʩ", "���¸�"};

	// �����ļ�������
	char level_names[5][10] = {"����", "����", "����", "�ƹ���", "�ʺ�"};

	// �������ÿλ���ӵļ���ÿ������Ԫ�ض�Ӧÿ�����ӵĵ�ǰ����
	int levels[MAX] = {1, 2, 0, 0, 4, -9999};

	// loves�����е�ÿ��Ԫ�ض�Ӧÿ�����ӵĺøжȣ���ʼ�����ÿ���˵ĺøжȶ�Ϊ100
	int loves[MAX] = {100, 100, 100, 100, 100, -9999};

	PlaySound(TEXT("sounds\\��������.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

	printf("****************************************\n");
	printf("���Դ��룺�鿴��ǰ������״̬\n");
	printf("%-12s����\t�øж�\n", "����");
	for (i = 0; i < count; i++)
	{
		printf("%-12s%s\t%d\n", names[i], level_names[levels[i]], loves[i]);
	}
	printf("****************************************\n");

	printf("�����뵱ǰ�ǻ��Ļʵ����ţ�");
	scanf("%s", emperor_name);      // ¼���ַ���ʱ������Ҫ&����

	printf("�ʵۡ�%s�����٣��������࣬�����˳���\n", emperor_name);
	printf("1���ʵ���ּѡ����\t(���ӹ���)\n");
	printf("2�����Ƴ��ң�\t\t(�޸�״̬����)\n");
	printf("3�������乬��\t\t(ɾ������)\n");
	printf("4�������ټ�����ȥС������������¡�\n");
	printf("������ѡ��");
	scanf("%d", &choice);

	switch (choice)
	{
		case 1:  // �ʵ���ּѡ����\t\t(���ӹ���)
			// 1������ǰ��Ҫ�ж�������û�пռ�
			// 2����������Ԫ�أ�name��loves��levels��

			PlaySound(TEXT("sounds\\ѡ��.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

			if (count < MAX)  // �����ǰ����������С��ϵͳ���ֵ
			{
				// ִ����Ӳ���
				printf("��������������䣺");
				scanf("%s", names[count]);

				// ����count��Ԫ�ص�״̬��ʼ��
				levels[count] = 0;     // �����ʼΪ0
				loves[count] = 100;    // �øжȳ�ʼΪ100
				count++;               // �����Ԫ�غ󣬼ǵ���Ӽ�����
			}
			else
			{
				printf("���£�Ҫע�����尡�����Ѿ�����Ϊ���ˣ�\n���ʧ��!\n");
			}
			break ;

		case 2: // ���Ƴ��ң�\t\t(�޸�״̬����)
			// 1���ҵ�Ҫ�������ӵ��±�
			// 2���޸�������ӵ�״̬  �øж�+10,  ������1���������߼��Ͳ�������
			// 3���޸��������ӵ�״̬  ������Ľ���ʺޣ��������Ӻøж�-10
			// ��Ҫ�����bug��δ֧�����������ڵ�������������Բ����

			PlaySound(TEXT("sounds\\����.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

			printf("���£����������Ҫ������������䣺");
			scanf("%s", temp_name);

			// �ַ����Ĳ���strcmp,��Ҫ����<string.h>
			// strcmp(temp_name, "abc") == 0-���������ַ�����ȣ�1-ǰһ�����ں�һ���� -1-ǰһ��С�ں�һ��
			for (i = 0; i < count; i++)
			{
				if (strcmp(temp_name, names[i]) == 0) // �������������պõ��������е�ĳ������
				{
					loves[i] += 10;
					// ����Ҫע�⣬���ܳ���5����0-4֮�䣩
					levels[i] = levels[i] >= 4 ? 4 : levels[i] + 1;
				}
				else
				{
					loves[i] -= 10;
				}
			}
			break ;

		case 3: // �����乬��\t\t(ɾ������)
			// 1������
			// 2������һ����ֵ��ǰ��һ��Ԫ��
			// 3������--
			// 4���޸��������ӵ�״̬���øж�+20

			PlaySound(TEXT("sounds\\�乬.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

			printf("���£�������Ҫ�����乬�ģ�");
			scanf("%s", temp_name);

			// ѭ������
			for (i = 0; i < count; i++)
			{
				if (strcmp(temp_name, names[i]) == 0) // �Ƚ��ַ����Ƿ����
				{
					// ��¼��Ҫ���ҵ��±�
					search_index = i;
					break ;
				}
			}

			if (-1 == search_index)  // ���search_index��ֵΪ��ֵ-1����ʾû���ҵ�
			{
				printf("�龪һ�������˴����乬���óԳԸúȺȣ�\n");
			}
			else
			{
				for (i = search_index; i < count - 1; i++)
				{
					// names[i] = name[i + 1];  ��Ϊ���ַ����飬c�����в�֧�������ֱ�Ӹ�ֵ
					// ������Ҫʹ��strcpy����ʵ������ĸ�ֵ,�����γ̻���ϸ���⣬�����˽⹦�ܼ���
					strcpy(names[i], names[i + 1]);
					loves[i] = loves[i + 1];
					levels[i] = levels[i + 1];
				}
				count--;
			}
			break ;

		case 4: // �����ټ�����ȥС������������¡�
			// 1������
			// 2�����Ӻøжȼ���
			// 3������ʹ���������ʫ�裬ʹ��������ֵķ�ʽ�����ֻʵ۵��Ĳ�
			PlaySound(TEXT("sounds\\һЦ���.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
			break ;

		default:
			printf("����Ϸ�ԣ��������ٴ�ȷ��!\n");
	}

	// ����ӡ��������״̬ǰ���Լ����������ʹ��ð������
	for (i = 0; i < count - 1; i++)
	{
		for (j = 0; j < count - i - 1; j++)
		{
			if (levels[j] < levels[j + 1])
			{
				// ��Ҫ��������������ͺøж�
				temp = levels[j];
				levels[j] = levels[j + 1];
				levels[j + 1] = temp;
				temp = loves[j];
				loves[j] = loves[j + 1];
				loves[j + 1] = temp;
				// ע���ַ����Ľ���
				strcpy(temp_name, names[j]);
				strcpy(names[j], names[j + 1]);
				strcpy(names[j + 1], temp_name);
			}
		}
	}

	printf("****************************************\n");
	printf("���Դ��룺�鿴��ǰ������״̬\n");
	printf("%-12s����\t�øж�\n", "����");
	for (i = 0; i < count; i++)
	{
		printf("%-12s%s\t%d\n", names[i], level_names[levels[i]], loves[i]);
	}
	printf("****************************************\n");
	return (0);
}
