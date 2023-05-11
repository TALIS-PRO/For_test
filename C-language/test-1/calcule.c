#include <stdio.h>

int main()
{
	float x, y;
	
	printf("input the first number x : ");
	scanf("%f", &x);
	printf("\ninput the second number  y : ");
	scanf("%f", &y);

	printf("\n\nHere your resulte : \n");

	printf("===> %.2f + %.2f = %.2f\n", x, y, (x + y));
	printf("===> %.2f - %.2f = %.2f\n", x, y, (x - y));
	printf("===> %.2f - %.2f = %.2f\n", y, x, (y - x));
	printf("===> %.2f * %.2f = %.2f\n", x, y, (x * y));
	if(y > 0 && x > 0)
	{
	printf("===> %.2f / %.2f = %.2f\n", x, y, (x / y));
	printf("===> %.2f / %.2f = %.2f\n", y, x, (y / x));
	}
	else if(x > 0)
	{
	printf("===> %.2f / %.2f = %.2f\n", y, x, (y / x));
	}
	else if(y > 0)
	{
	printf("===> %.2f / %.2f = %.2f\n", x, y, (x / y));
	}

	printf("Thank You  (0_o)\n");
	return (0);
}
