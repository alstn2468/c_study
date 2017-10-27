#include <stdio.h>

int main()
{
	char buffer[8];
	double *pd;
	int *pi;

	pd = (double *)buffer;
	*pd = 3.14;
	printf("%f\n", *pd);

	pi = (int *)buffer;
	*pi = 123;
	*(pi + 1) = 456;

	printf("%d %d\n", *pi, *(pi + 1));

	return 0;
}
