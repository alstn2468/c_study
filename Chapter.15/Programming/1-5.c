#include <stdio.h>
#define POWER_TYPE 0

#if POWER_TYPE == 0
int power(int x, int y)
{
	int result = 1.0;
	for (int i = 0; i < y; i++)
	{
		printf("result = %d\n", result);		// 1
		result *= x;
	}
}
#elif POWER_TYPE == 1
double power(int x, int y)
{
	double result = 1.0;
	for (int i = 0; i < y; i++)
	{
		printf("result = %f\n", result);		// 1
		result *= x;
	}
}
#endif

int main()
{
	power(2, 3);

	return 0;
}
