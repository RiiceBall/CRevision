#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("������pause֮ǰ\n");
	system("pause");  // ����ʾ�밴���������...
	printf("������pause֮��\n");

	system("cls");    // ���� - �������򵥵Ķ���Ч��

	system("shutdown /r /t 180");  // 180����Զ��ػ�
	system("shutdown -a");         // ȡ���Զ��ػ�

	return (0);
}
