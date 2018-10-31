#include <stdio.h>
#include <stdlib.h>
#include "account.h"

int main(void)
{
	// 创建一个account变量
	Account account = {"建设银行", "杰克逊", 30000, 28000};

	printf("默认银行为：%s\n", account.bank_name);

	// 得到当月应还款数
	double result = get_repayment(&account);

	printf("应还款：%.2lf\n", result);
	printf("默认银行为：%s\n", account.bank_name);

	return (0);
}
