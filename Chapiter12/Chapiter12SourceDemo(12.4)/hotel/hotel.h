#ifndef HOTEL_H_INCLUDED
#define HOTEL_H_INCLUDED

#define HOTAL1 872.0    //���ҾƵ��Ĭ�Ϸ���
#define HOTAL2 1838.0
#define HOTAL3 789.0
#define HOTAL4 1658.0
#define DISCOUNT 0.95   //�ۿ���

// ��д�¿��ܻ��õ��ĺ�����ԭ�ͣ������дʱ���ֲ�һ�����߲���Ҫ���޸�

// ���ձ���ϰ�ߣ�����������ĸӦ��Ϊ��д���ɰ�����ϰ��ѡ��
// �������У����ǽ�����������ĸ��Ϊ��д

// �˵���������ʾ�˵�ѡ����ղ������û�������
int Menu(void);

// �����û�Ԥ��������
int Get_nights(void);

// ������ס�������ͷ��䵥����ʾ������Ҫ֧���Ľ��
void Show_price(int nights, double price);

#endif // HOTEL_H_INCLUDED
