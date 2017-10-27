#include <stdio.h>

int main()
{
	int i = 10;
	double f = 12.3;
	int *pi = NULL;
	double *pf = NULL;

	pi = &i;
	pf = &f;

	printf("%u %u\n", pi, &i);
	printf("%u %u\n", pf, &f);

	return 0;
}
