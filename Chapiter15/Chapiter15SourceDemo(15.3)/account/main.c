#include <stdio.h>
#include <stdlib.h>
#include "account.h"

int main(void)
{
	// ����һ��account����
	Account account = {"��������", "�ܿ�ѷ", 30000, 28000};

	printf("Ĭ������Ϊ��%s\n", account.bank_name);

	// �õ�����Ӧ������
	double result = get_repayment(&account);

	printf("Ӧ���%.2lf\n", result);
	printf("Ĭ������Ϊ��%s\n", account.bank_name);

	return (0);
}
