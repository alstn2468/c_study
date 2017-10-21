#include <stdio.h>

double vector_dotp(double x[], double y[]);

int main()
{
	double x[3] = { 1.0, 2.0, 3.0 };
	double y[3] = { 1.0, 2.0, 3.0 };
	double value;

	value = vector_dotp(x, y);

	printf("x벡터와 y벡터의 내적은 %f 입니다.\n", value);

	return 0;
}

double vector_dotp(double x[], double y[])
{
	double result = 0.0;

	for (int i = 0; i < 3; i++)
	{
		result += x[i] * y[i];
	}
	return result;
}
