#include <stdio.h>

int main()
{
	int i, j;

	for (i = 2; i <= 100; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				goto A;
		}
		printf("%d ", i);
	A:;
	}
	return 0;
}
