#include <stdio.h>

int is_prime(int x);

int main()
{
	for (int n = 2; n <= 100; n++)
	{
		if (is_prime(n) == 1)
		{
			printf("%d ", n);
		}
	}
	return 0;
}

int is_prime(int x)
{
	for (int i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
