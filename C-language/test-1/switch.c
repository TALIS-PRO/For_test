#include <stdio.h>

/**
 * main - switch
 *Return: Returns 0
 */

int main(void)
{
	char grade;

	printf("Please enter your grade to see remark\n");
	scanf("%c", &grade);

	switch (grade)
	{
		case 'A':
			printf("You are an excellent student\n");
			break;
		case 'B':
			printf("Good student\n");
			break;
		case 'C':
			printf("You did well\n");
			break;
		default:
			printf("No remark\n");
	}

	return (0);
}
