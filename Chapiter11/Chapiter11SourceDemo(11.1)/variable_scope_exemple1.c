#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num = 9;
	{ //�����-��
		int num = 90;
		printf("%d\n", num); // ��ӡ90
	}
	printf("%d\n",num); // ��ӡ9

	return (0);
}
