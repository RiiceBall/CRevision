extern int count;         // ����ʽ�������ⲿ����
static int total = 0;     // ��̬���壬�ڲ�����
void counter(int num);    // ����ԭ��

void counter(int num)
{
	// �ֲ���̬����
	static int sub_total = 0;

	if (num <= 0)
	{
		printf("��%d��ѭ��ִ�����\n",count);
		printf("�ֲ���̬����sub_total��ȫ�־�̬����total:\n");
		printf("sub_total: %d\ttotal: %d\n", sub_total, total);
		sub_total = 0; // ÿ����ѭ������������Ϊ0
	}
	else
	{
		sub_total += num;
		total += num;
	}
}
