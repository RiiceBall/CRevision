#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// ˼���⣺��ν��û������Сд����ת�������Ĵ�д��
	// 1234 - ҼǪ������ʰ��Ԫ��

	int money,count = 0;   // count�����ֵ�λ��
	int trasfer_money[6];  // Ĭ��֧����λ����
	int i = 0;
	char unit[10][4] = {"��","Ҽ","��","��","��","��","½","��","��","��","ʰ"};

	printf("�������\n");
	scanf("%d", &money);

	// ���ж��û������˼�λ���֣��ٽ�ÿһλ����ȡ����
	while (money != 0)
	{
		trasfer_money[i] = money % 10;  // ȡ������
		money /= 10;  // ��ȥ�����һλ
		i++;
		count++;
	}

	printf("�����������һ����%dλ��\n", count);
	printf("�������ǽ�Ϊ����ӡ��\n");
	for (i = 0; i < count; i++)
	{
		printf("%d-%s\n", trasfer_money[i], unit[trasfer_money[i]]);
	}

	return (0);
}
