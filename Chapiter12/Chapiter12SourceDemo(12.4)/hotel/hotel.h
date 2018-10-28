#ifndef HOTEL_H_INCLUDED
#define HOTEL_H_INCLUDED

#define HOTAL1 872.0    //各家酒店的默认房费
#define HOTAL2 1838.0
#define HOTAL3 789.0
#define HOTAL4 1658.0
#define DISCOUNT 0.95   //折扣率

// 先写下可能会用到的函数的原型，如果编写时发现不一样或者不需要在修改

// 按照编码习惯，函数名首字母应该为大写（可按个人习惯选择）
// 本案例中，我们将函数名首字母改为大写

// 菜单函数：显示菜单选项，接收并返回用户的输入
int Menu(void);

// 返回用户预定的天数
int Get_nights(void);

// 根据入住的天数和房间单价显示最终需要支付的金额
void Show_price(int nights, double price);

#endif // HOTEL_H_INCLUDED
