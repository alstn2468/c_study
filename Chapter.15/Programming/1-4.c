#include <stdio.h>

double power(int x, int y)
{
	double result = 1.0;

	for (int i = 0; i < y; i++)
	{
		printf("%d : result = %f\n",__LINE__, result);		// 1
		result *= x;
	}

	return result;
}

int main()
{
	power(2, 3);

	return 0;
}
