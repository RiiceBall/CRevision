#ifndef HOTEL_H_INCLUDED
#define HOTEL_H_INCLUDED

#define HOTAL1 872.0    //���ҾƵ��Ĭ�Ϸ���
#define HOTAL2 1838.0
#define HOTAL3 789.0
#define HOTAL4 1658.0
#define DISCOUNT 0.95   //�ۿ���

// ��д�¿��ܻ��õ��ĺ�����ԭ�ͣ������дʱ���ֲ�һ�����߲���Ҫ���޸�

// �˵���������ʾ�˵�ѡ����ղ������û�������
int menu(void);

// �����û�Ԥ��������
int get_nights(void);

// ������ס��������ʾ������Ҫ֧���Ľ��
void show_price(int nights);

#endif // HOTEL_H_INCLUDED
