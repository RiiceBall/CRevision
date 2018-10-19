#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num = 9;
	{ //´úÂë¿é-Óò
		int num = 90;
		printf("%d\n", num); // ´òÓ¡90
	}
	printf("%d\n",num); // ´òÓ¡9

	return (0);
}
