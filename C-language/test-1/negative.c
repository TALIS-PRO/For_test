#include <stdio.h>

/*
* main - main negative number
* Return: Return 0
*/

int main(void)
{
	int a;

	printf("Enter a negative number that's perfectly divisible by 2 : \n");
	scanf("%d", &a);

	if (a < 0 && a % 2 == 0)
	{
		printf("Good Job!");
	}
	else
	{
		printf("Incorrect Input!!!");
	}

	return (0);
}
