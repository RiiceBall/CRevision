#include <stdio.h>
#include <stdlib.h>
#include "hero.h"

// ����hero.c�ļ��е�herosȫ�ֱ���
extern Hero heros[100];

int main(void)
{
	// ����¼�뺯��
	input();

	// ���ô�ӡ����
	show();

	// ��ʾӢ��ƽ��ֵ
	show_avg();

	return (0);
}
