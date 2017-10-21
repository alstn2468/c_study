#include <stdio.h>
#include <math.h>

int f_equal(double a, double b);
double f_abs(double x);
double f_min(double x, double y);

int main()
{
	double x, y;

	printf("실수를 입력하세요 : ");
	scanf("%lf", &x);
	printf("실수를 입력하세요 : ");
	scanf("%lf", &y);

	if (f_equal(x, y) == 1)
	{
		printf("두개의 실수는 서로 같음\n");
	}
	else
	{
		printf("두개의 실수는 서로 다름\n");
	}
	return 0;
}

double f_abs(double x)
{
	if (x > 0)
	{
		return x;
	}
	else
	{
		return -x;
	}
}

double f_min(double x, double y)
{
	if (x > y)
	{
		return y;
	}
	else
	{
		return x;
	}
}

int f_equal(double a, double b)
{
	double value;

	value = f_abs(a - b) / f_min(f_abs(a), f_abs(b));

	if (value < 0.000001)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
