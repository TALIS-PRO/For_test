#include <stdio.h>

/*
 * main - main Functions
 * Return: Returns 0
 */

void numberMulti(int x, int y)
{
	int calc = x * y;

	printf("Hello\nthe result of The calcul is : %.2d\n", calc);
}

int main(void)
{
	int x,y;

	printf("input x and y : ");
	scanf("%d%d", &x, &y);

	numberMulti(x, y);

	return(0);
}
