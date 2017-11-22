#include <stdio.h>
#define ARRAY_INIT(array, size, value) {for(int i = 0; i < size; i++)array[i] = (value);}

int main()
{
	int a[10];
	ARRAY_INIT(a, 10, 0);

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}

	return 0;
}
