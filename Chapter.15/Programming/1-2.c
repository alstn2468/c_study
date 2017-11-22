#include <stdio.h>
#define DEBUG 2

double power(int x, int y)
{
	double result = 1.0;

	for (int i = 0; i < y; i++)
	{
#if DEBUG == 2
		printf("result = %f\n", result);		// 1
#endif
		result *= x;
	}

	return result;
}

int main()
{
	power(2, 3);

	return 0;
}
