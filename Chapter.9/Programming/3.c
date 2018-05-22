#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_random()
{
	static int init_check = 0;

	if (init_check == 0)
	{
		printf("Initialization\n");
		srand((unsigned)time(NULL));
		init_check = 1;
	}

	return rand();
}

int main()
{
	printf("%d\n", get_random());
	printf("%d\n", get_random());
	printf("%d\n", get_random());
	printf("%d\n", get_random());

	return 0;
}
