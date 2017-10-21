#include <stdio.h>

int main()
{
	int a, b, *a1, *b1;
	char c, d, *c1, *d1;

	a1 = &a;
	b1 = &b;
	c1 = &c;
	d1 = &d;

	printf("compare values via pointer\n");
	*a1 = 35;
	*b1 = 33;
	if (*a1 == *b1)
	{
		printf("int compare : %d == %d = 1\n", *a1, *b1);
	}
	else
	{
		printf("int compare : %d == %d = 0\n", *a1, *b1);
	}
	*a1 = 32;
	*b1 = 32;
	if (*a1 == *b1)
	{
		printf("int compare : %d == %d = 1\n", *a1, *b1);
	}
	else
	{
		printf("int compare : %d == %d = 0\n", *a1, *b1);
	}
	*c1 = 'a';
	*d1 = 'A';
	if (*c1 == *d1)
	{
		printf("int compare : '%c' == '%c' = 1\n", *c1, *d1);
	}
	else
	{
		printf("int compare : '%c' == '%c' = 0\n", *c1, *d1);
	}
	*c1 = 'c';
	*d1 = 'c';
	if (*c1 == *d1)
	{
		printf("int compare : '%c' == '%c' = 1\n", *c1, *d1);
	}
	else
	{
		printf("int compare : '%c' == '%c' = 0\n", *c1, *d1);
	}
	return 0;
}
