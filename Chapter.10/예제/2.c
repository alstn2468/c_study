#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main()
{
	int grade[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		grade[i] = rand() % 100;
	}
	for (int i = 0; i < SIZE; i++)
	{
		printf("grade[%d] = %d\n", i, grade[i]);
	}
	return 0;
}
