#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i = 0;
	double score[] = {98, 89, 65, 43, 76};
	double *ptr_score;

	ptr_score = &score[1];  // 获取数组第2个元素的地址
	ptr_score += 2;         // 将地址加上2
	printf("%.2lf\n", *ptr_score);  // 将获得数组第4个元素的值

	ptr_score -= 3;         // 将地址减去3
	printf("%.2lf\n", *ptr_score);  // 将获得数组第1个元素的值

	// 数组地址可以任意加减，注意不要超出数组即可

	return (0);
}
