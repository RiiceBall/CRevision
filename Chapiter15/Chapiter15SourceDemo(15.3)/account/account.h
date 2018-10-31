#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

// �˵��ṹ
typedef struct _account
{
	char *bank_name;     // ��������
	char *user_name;     // �û�����
	double limit;        // �˻��Ķ��
	double bill_amount;  // �����˵����
}Account;

// �õ�ĳ���˻�����Ӧ������
// ���ݽṹ����ʱ���Ǹ��������ṹ������ֵ�������� - Ч�ʵ�
// double get_repayment(Account account);

// �������ݵ��ǽṹָ�� - ����ַ
double get_repayment(Account *account);

// �������ֵ���޸Ŀ����ڲ���ǰ��Ӹ�const
// ����������const�󣬻���ָ����Ӱ�ȫ
// double get_repayment(const Account *account);


#endif // ACCOUNT_H_INCLUDED
