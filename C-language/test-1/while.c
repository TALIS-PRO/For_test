#include <stdio.h>

int main(void)
{
	int i;
	printf("Enter a number :  ");
	scanf("%d", &i);

	while (i <= 20)
	{
		printf("Number %d\n", i);
		i++;
	}

	return (0);
}
