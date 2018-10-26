#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("这里是pause之前\n");
	system("pause");  // 会显示请按任意键继续...
	printf("这里是pause之后\n");

	system("cls");    // 清屏 - 可以做简单的动画效果

	system("shutdown /r /t 180");  // 180秒后自动关机
	system("shutdown -a");         // 取消自动关机

	return (0);
}
