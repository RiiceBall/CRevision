#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

// 账单结构
typedef struct _account
{
	char *bank_name;     // 银行名称
	char *user_name;     // 用户名称
	double limit;        // 账户的额度
	double bill_amount;  // 当月账单金额
}Account;

// 得到某个账户当月应还款数
// 传递结构变量时，是复制整个结构变量的值到函数中 - 效率低
// double get_repayment(Account account);

// 参数传递的是结构指针 - 传地址
double get_repayment(Account *account);

// 如果不想值被修改可以在参数前面加个const
// 参数中增加const后，会让指针更加安全
// double get_repayment(const Account *account);


#endif // ACCOUNT_H_INCLUDED
