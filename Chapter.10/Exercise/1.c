#include <stdio.h>

#define MAX_SIZE 4

int main()
{
	int a[MAX_SIZE] = { 0,1,2,3 };
	int b[4];

	for (int i = 0; i < MAX_SIZE; i++)
	{
		b[i] = a[i];
	}
	return 0;
}
