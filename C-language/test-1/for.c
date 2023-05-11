#include <stdio.h>

int main(void)
{
	for (int i = 0; i <= 10; i++)
	{
		printf("Start of outer Loop %d\n", i);
		for (int j = 0; j < 5; j++)
		{
			printf("Inner Loop %d\n", j);
		}
		printf("End of outer Loop %d\n\n\n", i);

		if (i == 7) {break;}
	}

	return (0);
}
