#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void array_fill(int *A, int size);

int main()
{
	int data[10];

	srand((unsigned)time(NULL));

	array_fill(data, 10);

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", data[i]);
	}

	return 0;
}

void array_fill(int *A, int size)
{
	for (int i = 0; i < size; i++)
	{
		A[i] = rand();
	}
}
