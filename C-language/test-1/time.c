#include <stdio.h>

int main(void)
{
	int R, t, s, m, h, d;

	printf("Enter time in second : ");
	scanf("%d", &t);

	d = (t / (3600*24));
	R = (t % (3600*24));
	h = (R / 3600);
	m = (R % 3600) / 60;
	s = ((R % 3600) % 60);

	printf("the time : is %dDay %dH  %dMIN %dS\n", d, h, m, s);

	return (0);
}
