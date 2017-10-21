#include <stdio.h>

void sum(int n, int *result)
{
	*result = 0;

	for (int num = 0; num  <= n; num++)
	{
		*result = *result + num;
	}
}

int main()
{
	int value;

	sum(50, &value);

	printf("1 ~ 50 sum = %d\n", value);

	return 0;
}
