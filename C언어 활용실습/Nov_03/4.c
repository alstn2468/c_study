#include <stdio.h>
#define SIZE 10

int main()
{
	int arr[SIZE];
	int (*p)[SIZE];
	int min, max;

	p = &arr;
	min = 0;
	max = 0;

	printf("input number and find min value and max value via array pointer\n");

	for (int i = 0; i < SIZE; i++)
	{
		printf("input : ");
		scanf("%d", &(*p)[i]);
	}
	for (int i = 0; i < SIZE; i++)
	{
		if ((*p)[i] > max)
		{
			max = (*p)[i];
		}
		else
		{
			min = (*p)[i];
		}
	}
	printf("min value : %d\n", min);
	printf("max value : %d\n", max);

	return 0;
}
