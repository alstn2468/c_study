#include <stdio.h>

int main()
{
	int num = 0;
	int *p;

	p = &num;

	for (int i = 0; i <= 100; i++)
	{
	*p = *p + i;
	}
	printf("result is %d\n", *p);

	return 0;
}
