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
	int i, a = 0, b = 0, c = 0;

	while (a < size && b < size)
	{
		if (A[a] < B[b])
		{
			C[c++] = A[a++];
		}
		else
		{
			C[c++] = B[b++];
		}

	}
	for (; a < size; a++)
	{
		C[c++] = A[a];
	}
	for (; b < size; b++)
	{
		C[c++] = B[b];
	}
}
