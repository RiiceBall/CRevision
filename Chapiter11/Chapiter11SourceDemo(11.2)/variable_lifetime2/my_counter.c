/**
 * my_counter.c
 * ������ż��㺯�����ô����ĺ���ԭ�ͼ�ʵ��
 */

// �������ⲿ����
extern int while_count;
void counter(int i);  // ��������counter����ִ�ж��ٴ�

void counter(int i)
{
	static int sub_total = 0; // ��̬����

	sub_total++;
	printf("counter������������%d��\n", sub_total);
	printf("��ǰ��while�ĵ�%d��!\n", while_count);
	return;
}
