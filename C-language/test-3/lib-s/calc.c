#include <stdio.h>
#include "calc.h"

int main()
{
	int a, b;

	printf("input number a : ");
	scanf("%d", &a);
	printf("input number b : ");
	scanf("%d", &b);

	add(a,b);
	sub(a,b);
	mult(a,b);
	div(a,b);

	return (0);
}
