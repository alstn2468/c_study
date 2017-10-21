#include <stdio.h>
#include <math.h>

double sin_degree(double angle);

int main()
{
	double degree;

	for (degree = 0.0; degree <= 180.0; degree += 10.0)
	{
		printf("sin(%f)의 값은 %f\n", degree, sin_degree(degree));
	}
	return 0;
}

double sin_degree(double angle)
{
	return sin((3.141592 * angle) / 180.0);
}
