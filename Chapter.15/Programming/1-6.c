#include <stdio.h>

double power(int x, int y)
{
	double result = 1.0;
	for (int i = 0; i < y; i++)
	{
#if 0
		printf("result = %f\n", result);		// 1
#endif
		result *= x;
	}
}

int main()
{
	power(2, 3);

	return 0;
}
