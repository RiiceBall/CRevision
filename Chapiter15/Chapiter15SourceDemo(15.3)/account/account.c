#include "account.h"

// �õ�ĳ���˻�����Ӧ������
/*double get_repayment(Account account)
{
	account.bank_name = "��������";  // ����Ե��ú�����account��Ӱ��

	return (account.limit - account.bill_amount);
}
*/

// �������ݵ��ǽṹָ�� - ����ַ
double get_repayment(Account *account)
{
	// ����ָ�룬�Ƚ�Σ��
	account->bank_name = "��������";  // ��Ե��ú�����account��Ӱ��

	return (account->limit - account->bill_amount);
}

// �������ֵ���޸Ŀ����ڲ���ǰ��Ӹ�const
/* double get_repayment(const Account *account)
{
	// �����ڲ���ǰ�����constʱ��������޸ĸñ����ģ��������ͻᱨ��

	account->bank_name = "��������";  // �ᱨ��

	return (account->limit - account->bill_amount);
}
*/
