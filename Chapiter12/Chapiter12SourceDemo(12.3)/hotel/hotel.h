#ifndef HOTEL_H_INCLUDED
#define HOTEL_H_INCLUDED

#define HOTAL1 872.0    //各家酒店的默认房费
#define HOTAL2 1838.0
#define HOTAL3 789.0
#define HOTAL4 1658.0
#define DISCOUNT 0.95   //折扣率

// 先写下可能会用到的函数的原型，如果编写时发现不一样或者不需要在修改

// 菜单函数：显示菜单选项，接收并返回用户的输入
int menu(void);

// 返回用户预定的天数
int get_nights(void);

// 根据入住的天数显示最终需要支付的金额
void show_price(int nights);

#endif // HOTEL_H_INCLUDED
