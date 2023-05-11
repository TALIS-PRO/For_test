#include <stdio.h>

int main(void)
{
	int age;	
	printf("what is your age ?\n");
	scanf("%d", &age);
	if (age < 18 && age > 0)
	{
		printf("You are not allowed in this App !!!\n");
	}
	else if (age > 18 && age < 60)
	{
		printf("Welcome in App \n");
	}
	else if (age > 60)
	{
		printf("You are odl to use this App !!!\n");
	}
	else
	{
		printf("You are not Here -_-\n");
	}
	return (0);
}
