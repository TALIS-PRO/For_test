#include <stdio.h>

int main(void)
{
	float a, b, c, d, e, S, M;

	printf("\nEntre la Note de Math : ");
	scanf("%f", &a);
	printf("\nEntre la Note de Physique : ");
	scanf("%f", &b);
	printf("\nEntre la Note de Geologie : ");
	scanf("%f", &c);
	printf("\nEntre la Note de Biologie : ");
	scanf("%f", &d);
	printf("\nEntre la Note de Informatique : ");
	scanf("%f", &e);

	S = (a + b + c + d + e);
	M = (S / 5);

	printf("\nLe somme est : %.2f", S);
	printf("\nLa moyenne est : %.2f\n", M);

	return (0);
}
