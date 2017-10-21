#include <stdio.h>
#include <stdlib.h>

int b_rand();

int main()
{
	for (int i = 0; i < 5; i++)
	{
		printf("%d", b_rand());
	}
	return 0;
}

int b_rand()
{
	return rand() % 2;
}
