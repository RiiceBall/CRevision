#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
	int ch;  // ���ڱ���getch��ȡ��ֵ

	printf("�밴��������鿴����ֵ��");

	// getch������getchar��������
	// �ȴ��û�����һ���������ǲ���Ҫ�س��ͻ��Զ�����
	ch = getch();

	// ��ӡ������ֵ
	printf("%d", ch);

	return (0);
}
