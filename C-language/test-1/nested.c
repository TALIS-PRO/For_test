#include <stdio.h>

/**
 * main - Main function
 * Return: Ruturns 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 5; i++)
	{
		printf("STARTING ===> Outer Loop : %d\n", i);
		for (j = 0; j <= 3; j++)
		{
			printf("     Inner Loop number %d\n", j);
		}
		printf("ENDING ===> Outer Loop : %d\n\n", i);
	}
	return (0);
}
