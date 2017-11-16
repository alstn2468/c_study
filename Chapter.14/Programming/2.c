#include <stdio.h>

int get_sum(int array[], int size);

int main()
{
	int m[][5] =
	{
		{10, 10, 10, 10, 10},
		{10, 10, 10, 10, 10},
		{10, 10, 10, 10, 10}
	};

	int result = get_sum(m[0], 15);

	printf("%d\n", result);

	return 0;
}

int get_sum(int array[], int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += array[i];
	}

	return sum;
}
