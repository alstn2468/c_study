#include <stdio.h>

int main()
{
	int *p, n, a, b;

	p = &n;

	*p = 10;
	a = *p + 1;
	b = a + 10;

	printf("value add via pointer\n");
	printf("init value is %d\n", *p);
	printf("the value add one is %d\n", a);
	printf("the value add ten is %d\n", b);

	return 0;
}
