#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 循环输入六个月的工资数，计算半年内的平均工资。

	int i;
	double salary;	      // 工资
	double total_salary;  // 六个月的总工资
	double avg_salary;    // 六个月的平均工资

	for (i = 0; i < 6; i++)
	{
		printf("请输入第%d个月的工资：", i + 1);
		scanf("%lf", &salary);

		// 累加
		total_salary += salary;
	}

	// 计算平均工资
	avg_salary = total_salary / 6;
	printf("平均工资为%.2lf元。\n", avg_salary);

	return (0);
}
