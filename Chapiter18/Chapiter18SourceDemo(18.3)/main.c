#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "game.h"
#include "game_lib.h"

int main(void)
{
	char key;   // ���յ����û�����

	// �����û���ʼ��������3��2
	X = 3, Y = 2;

	// ���ô��ڱ���
	set_title("Ц������֮���ұ��� - �Ͼ�C���԰�");

	// ���õ���ɫ�ڵ׵�������ɫ
	set_color(10, 0);

	// ��ӡ��Ϸ��ӭ��Ϣ
	show_welcome();

	// ��ӡ��Ϸ��ͼ
	show_map();

	// ��ӡ��Ϣ
	show_information();

	// ��ӡ�˵�
	show_main_menu();

	// ��Ϸѭ��
	while (1)
	{
		key = getch();  // ��getchar�÷�һ������������Ҫ���س��ͻ����

		// �ж�key��ֵ
		// ���ݵ��ԵĲ�ͬ��λ��ֵ���ܲ�ͬ
		// �����֪��ĳ����λ��ֵ���Դ�ӡkey��%d
		// �������Ҽ���ֵ����Ϊ��
		// �ϣ�38/VK_UP ���� 72
		// �ң�39/VK_RIGHT ���� 77
		// �£�40/VK_DOWN ���� 80
		// ��37/VK_LEFT ���� 75
		if (key >= '1' && key <= '5')
		{
			printf("1~5֮�����Ϸ�˵�");
		}
		else if (key == 72 || key == 38) // ��
		{
			// ����
			Y--;
		}
		else if (key == 77 || key == 39) // ��
		{
			// ����
			X++;
		}
		else if (key == 80 || key == 40) // ��
		{
			// ����
			Y++;
		}
		else if (key == 75 || key == 37) // ��
		{
			// ����
			X--;
		}
		// ���������ͼ���������һ��
		if (X > 7) X = 0;
		if (X < 0) X = 7;
		if (Y > 7) Y = 0;
		if (Y < 0) Y = 7;
		show_map();  // ������ʾ��ͼ
	}

	return (0);
}
