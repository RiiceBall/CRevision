#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	/*
		������дһ������Ʒ�۸��С��Ϸ
		1.�����趨һ����Ʒ�ļ۸����û�ȥ��
		2.�û�����²�ļ۸��ϵͳ������С����ʾ
		3.�����5���ھͲµ���ȷ�ļ۸񣬸��뽱����ʾ
	*/
	// ѭ�������Ƕ��٣�
	// ÿ��һ�Σ��²��ܴ��� +1

	int price = 7890;   // Ҫ�û��µ���Ʒ�۸�Ҳ����ʹ�������������
	int guess_price;    // �û��²����Ʒ�۸�
	int count = 0;      // ������¼�µĴ���

	// Ϊ����ÿ�����������һ��
	srand(time(NULL));
	price = rand() % 10000;  // ������ɲ²�����

	for (;;)
	{
		printf("������²�����Ʒ�۸�");
		scanf("%d", &guess_price);

		if (guess_price > price)
		{
			printf("���ˣ�\n");
		}
		else if (guess_price < price)
		{
			printf("С��!\n");
		}
		else      // ����
		{
			printf("��ϲ���¶�����\n");
			count++;
			break;   // ����¶��ˣ�������ѭ��
		}
		count++;  // ÿ�β²��²����++
	}

	printf("��һ������%d�Σ�\n", count);
	if (count <= 5)
	{
		printf("���ʣ�����ֱ����ţ�\n");
	}

	return (0);
}
