#include <stdio.h>

void array_print(int *A, int size);

int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	array_print(arr, 10);

	return 0;
}

void array_print(int *A, int size)
{
	printf("arr[] = { ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", A[i]);
	}
	printf("}\n");
}
