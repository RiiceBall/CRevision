/**
 * my_counter.c
 * ������ż��㺯�����ô����ĺ���ԭ�ͼ�ʵ��
 */
int counter(void);  // �������㱾�����������˶��ٴ�

int counter(void)
{
	// ��̬�洢�����������Ϊ��̬������ÿ�ε��ú���count����������Ϊ0
	static int count = 0; // ��һ��ִ�л����ռ䣬�Ժ�Ͳ��ٷ���ռ���-����ֻ�ᱻִ��һ��
	count++;
	return count;
}