#include <stdio.h>

int main()
{
	int x, y;

	for (x = 0; x < 7; x++)
	{
		for (y = 0; y < (6 - x); y++)
			printf(" ");
		for (y = 6 - x; y < 7; y++)
			printf("*");
		printf("\n");
	}

	return 0;
}
