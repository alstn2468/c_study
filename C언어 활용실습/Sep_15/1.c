#include <stdio.h>

int main()
{
	int x = 0, y = 0, result;
	int *p, *q;

	printf("input two numbers : ");
	scanf("%d %d", &x, &y);

	p = &x;
	q = &y;

	if (*p > *q)
		result = *p;
	else
		result = *q;

	printf("The larger number is %d\n", result);

	return 0;
}
