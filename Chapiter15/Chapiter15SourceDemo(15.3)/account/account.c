#include "account.h"

// 得到某个账户当月应还款数
/*double get_repayment(Account account)
{
	account.bank_name = "招商银行";  // 不会对调用函数的account有影响

	return (account.limit - account.bill_amount);
}
*/

// 参数传递的是结构指针 - 传地址
double get_repayment(Account *account)
{
	// 传递指针，比较危险
	account->bank_name = "招商银行";  // 会对调用函数的account有影响

	return (account->limit - account->bill_amount);
}

// 如果不想值被修改可以在参数前面加个const
/* double get_repayment(const Account *account)
{
	// 当你在参数前面加上const时，如果想修改该变量的，编译器就会报错

	account->bank_name = "招商银行";  // 会报错

	return (account->limit - account->bill_amount);
}
*/
