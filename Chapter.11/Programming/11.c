#include <stdio.h>
#define SIZE 4

void merge(int *A, int *B, int *C, int size);

int main()
{
	int a[SIZE] = { 2, 5, 7, 8 }, b[SIZE] = { 1, 3, 4, 6 }, c[SIZE * 2] = { 0 };

	printf("a = ");

	for (int i = 0; i < SIZE; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");

	printf("b = ");

	for (int i = 0; i < SIZE; i++)
	{
		printf("%d, ", b[i]);
	}

	printf("\n");

	merge(a, b, c, SIZE);

	printf("c = ");

	for (int i = 0; i < (SIZE * 2); i++)
	{
		printf("%d, ", c[i]);
	}
	printf("\n");

	return 0;
}

void merge(int *A, int *B, int *C, int size)
{
	int tmp;

	for (int i = 0; i < size; i++)
	{
		C[i] = A[i];
	}

	for (int i = 0; i < size; i++)
	{
		C[i + 4] = B[i];
	}

	for (int i = 0; i < (size * 2); i++)
	{
		for (int j = i + 1; j < (size * 2); j++)
		{
			if (C[i] > C[j])
			{
				tmp = C[i];
				C[i] = C[j];
				C[j] = tmp;
			}
		}
	}
}
