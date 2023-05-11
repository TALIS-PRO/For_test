#include <stdio.h>

void div(int a, int b)
{
	if (b != 0)
		printf("Division %d / %d  is : %.2d \n", a, b, a / b);
	if (a != 0)
		printf("Division %d / %d is : %.2d \n", b, a, b / a);
}
