#ifndef HERO_H_INCLUDED
#define HERO_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

// 结构体：职业、英雄能力、时间、英雄
typedef struct _job
{
	int id;             // 职业编号
	char *name;         // 职业名称
	char *desc;         // 职业的描述
}Job;
//Job job;              // 简化结构体的使用

typedef struct _abillity
{
	int id;             // 特殊能力编号
	char *name;         // 特殊能力名称
	char *intro;        // 特殊能力的说明
}Abillity;

typedef struct _pub_time
{
	int year;           // 年
	int month;          // 月
	int day;            // 日
}Pub_time;

typedef struct _hero
{
	int id;             // 英雄编号
	char *name;         // 英雄名称
	char sex;           // 英雄性别
	Job job;            // 英雄的职业
	double hp;          // 英雄的生命值
	double speed;       // 攻击速度
	Abillity abillity;  // 特殊能力
	Pub_time pub_time;  // 上线时间
}Hero;

// 输入英雄的值
void input_hero(void);

// 输出英雄的值
void show_hero(void);

#endif // HERO_H_INCLUDED
