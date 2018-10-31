#include "game_lib.h"

/** ���ÿ���̨���ڵı��� */
void set_title(char *title)
{
	// windows���еĺ���
	SetConsoleTitle(title);
}

/** �������ֵ�ǰ��ɫ�ͱ���ɫ */
/*  0-��ɫ��1-��ɫ��  2-��ɫ��   3,-ǳ��ɫ��  4-��ɫ��   5-��ɫ��   6-��ɫ��   7-��ɫ��
 *  8-��ɫ��9-����ɫ��10-����ɫ��11-��ǳ��ɫ��12-����ɫ��13-����ɫ��14-����ɫ��15-����ɫ
 */
void set_color(int fore_color, int back_color)
{
	HANDLE win_handle;  // ���

	// ��ȡ����̨����
	win_handle = GetStdHandle(STD_OUTPUT_HANDLE);

	// ����������ɫ
	SetConsoleTextAttribute(win_handle, fore_color + back_color * 0x10);
}

/** ���ù���λ�� */
void set_cursor_position(int x, int y)
{
	HANDLE win_handle;  // ���
	COORD pos = {x, y}; // ��x��y���浽COORD���ݽṹ��

	// ��ȡ����̨����
	win_handle = GetStdHandle(STD_OUTPUT_HANDLE);

	// ���ù�������
	SetConsoleCursorPosition(win_handle, pos);
}

/** ��x��y���꿪ʼ������row_count�� */
void clear_info(int x, int y, int row_count)
{
	int i, j;

	// ÿ�����78���ַ� - ��ӡ78���ո�
	for (i = 0; i < row_count; i++)
	{
		// �ƶ���굽ÿһ�еĿ�ͷ
		set_cursor_position(x + 1, y + i);
		for (j = 0; j < 76; j++)
		{
			printf(" ");
		}
	}
}
