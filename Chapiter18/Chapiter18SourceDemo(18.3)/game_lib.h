#ifndef GAME_LIB_H_INCLUDED
#define GAME_LIB_H_INCLUDED

/*******************************************************
 * �ļ�����game_lib.h
 * ��  ��������������Ϸ�г��õ�ϵͳ����
 * ������������ɫ�������ȣ�
 * �����ˣ��Ͼ�ѧ�û�Ա4.0������
 * ��  �ڣ�2018-10-29
 * ��  ����1.0
 * ��  ����http://www.xuetang9.com
 * �ٷ�QQ��614940318���Ͼž���
 ******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/** ���ÿ���̨���ڵı��� */
void set_title(char *title);

/** �������ֵ�ǰ��ɫ�ͱ���ɫ */
/*  0-��ɫ��1-��ɫ��  2-��ɫ��   3,-ǳ��ɫ��  4-��ɫ��   5-��ɫ��   6-��ɫ��   7-��ɫ��
 *  8-��ɫ��9-����ɫ��10-����ɫ��11-��ǳ��ɫ��12-����ɫ��13-����ɫ��14-����ɫ��15-����ɫ
 */
void set_color(int fore_color, int back_color);

/** ���ù���λ�� */
void set_cursor_position(int x, int y);

#endif // GAME_LIB_H_INCLUDED
