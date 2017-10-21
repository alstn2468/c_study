#include <stdio.h>

void scalar_mult(int A[][3], int scalar);

int main()
{
	int A[3][3] =
	{
		{ 1, 2, 3 },
		{ 4, 5, 6 },
		{ 7, 8, 9 },
	};

	scalar_mult(A, 2);

	return 0;
}

void scalar_mult(int A[][3], int scalar)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			A[i][j] = A[i][j] * scalar;
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
}
