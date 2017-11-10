#include <stdio.h>

void increase(int arr[], int size, int value);

int main()
{
	int arr[] = { 1, 3, 5, 7, 9, 11 };
	int size = sizeof(arr) / sizeof(int);
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	increase(arr, size, 5);

	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}

void increase(int arr[], int size, int value)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = arr[i] + value;
	}
}
