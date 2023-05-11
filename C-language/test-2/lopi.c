#include <stdio.h>

/**
 * main - print Lopps
 * Return: Rutuns 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 3 ; i++)
	{
		printf("Start %d\n", i);

			for (j = 0; j <= 3; j++)
			{
				printf("\tHello Talis %d\n", j);
			}

		printf("End %d\n", i);
	}
}
