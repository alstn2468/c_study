#include <stdio.h>

int main()
{
	int x, y;

	for (x = 0; x < 3; x++)
		for (y = 2; y >= 0; y--)
			printf("*");

	return 0;
}
