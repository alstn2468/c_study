#include <stdio.h>

int main()
{
	int i = 10;
	int *p;

	p = &i;

	printf("i = %d\n", i);

	*p = 20;
	printf("i = %d\n", i);

	return 0;
}
