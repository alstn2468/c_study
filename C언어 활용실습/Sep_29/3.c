#include <stdio.h>
#include <math.h>

void func(int a, int b, int c, double *result1, double *result2)
{
	*result1 = (-b + sqrt(b*b - (4 * a * c))) / (2 * a);
	*result2 = (-b - sqrt(b*b - (4 * a * c))) / (2 * a);
}

int main()
{
	double result1, result2;

	func(3, 5, 1, &result1, &result2);

	printf("%d^2 + %dx + %d = 0\nx = %g, %g\n", 3, 5, 1, result1, result2);

	return 0;
}
