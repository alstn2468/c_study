#include <stdio.h>
#include <stdlib.h>

void sieve(int s[], int size);

int main()
{
	int top_value = 100;
	int count = top_value - 1;
	int my_array[101];

	for (int i = 2; i <= top_value; ++i)
	{
		my_array[i] = 1;
	}
	for (int prime = 2; prime <= top_value; ++prime)
	{
		if (my_array[prime])
		{
			for (int multiple = 2 * prime; multiple <= top_value; multiple += prime)
			{
				my_array[multiple] = 0;
			}
		}
	}
	for (int i = 2; i <= top_value; ++i)
	{
		if (my_array[i])
		{
			printf("%d ", i);
		}
	}
	return 0;
}
