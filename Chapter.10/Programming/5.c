#include <stdio.h>
#include <stdlib.h>

int main()
{
	int freq[10] = { 0 };

	int max = 0;

	for (int i = 0; i < 100; i++)
	{
		++freq[rand() % 10];
	}
	for (int i = 1; i < 10; i++)
	{
		if (freq[i] > max)
		{
			max = i;
		}
	}
	printf("%d\n", max);

	return 0;
}
