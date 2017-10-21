#include <stdio.h>

#define N_DATA 10

int array_equal(int a[], int b[], int size);

int main()
{
	int A[N_DATA] = { 1,2,3 };
	int B[N_DATA] = { 0 };

	printf("%d\n", array_equal(A, B, N_DATA));

	return 0;
}

int array_equal(int a[], int b[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (b[i] != a[i])
		{
			return 0;
		}
		return 1;
	}
}
