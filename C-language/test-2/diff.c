#include <stdio.h>

int main()
{
	float A, B;

	printf("input number A :  ");
	scanf("%f", &A);
	printf("\ninput number B :  ");
	scanf("%f", &B);

	if ((A > 0 && B > 0))
		printf("\nA and B are same Signe\n");
	else if((A < 0 && B < 0))
		printf("\nA and B are same Signe\n");
	else if ((A > 0 && B < 0))
		printf("\nA and B are Different Signe\n");
	else if ((A < 0 && B > 0))
		printf("\nA and B are Different Signe\n");
	else
		printf("\nA or B is null !!!\n");

	return (0);
}
