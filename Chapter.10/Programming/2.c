#include <stdio.h>
#include <stdlib.h>

int main()
{
	int list[10];
	int max, min;

	for (int i = 0; i < 10; i++)
	{
		list[i] = rand() % 10;
	}

	max = min = list[0];

	for (int i = 1; i < 10; i++)
	{
		if (list[i] < min)
		{
			min = list[i];
		}
		if (list[i] > max)
		{
			max = list[i];
		}
	}

	printf("최대값은 %d\n", max);
	printf("최소값은 %d\n", min);

	return 0;
}
