#ifndef HERO_H_INCLUDED
#define HERO_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

// 时间结构体
typedef struct _my_time
{
	int year;           // 年
	int month;          // 月
	int day;            // 日
}My_time;

// 英雄结构体
typedef struct _hero
{
	char *name;         // 英雄名称
	char sex;           // 英雄性别
	char *job;          // 英雄职业
	int life;           // 英雄生命值
	double speed;       // 攻击速度
	char *abillity;     // 特殊能力
	My_time pub_time;   // 上线时间
}Hero;

// 计算平均生命值
void show_avg(void);

// 动态录入内容
void input(void);

// 显示英雄的详细信息
void show(void);

#endif // HERO_H_INCLUDED
