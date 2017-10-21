#include <stdio.h>
#include <stdlib.h>

double f_rand();

int main()
{
	for (int i = 0; i < 5; i++)
	{
		printf("%f ", f_rand());
	}
	return 0;
}

double f_rand()
{
	return rand() / (double)RAND_MAX;
}
