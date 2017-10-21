#include <stdio.h>

void calc(int n1, char symbol, int n2, double *result)
{
	switch (symbol)
	{
	case '+':
		*result = n1 + n2;
		break;
	case '-':
		*result = n1 - n2;
		break;
	case '*':
		*result = n1 * n2;
		break;
	case '/':
		*result = (double)n1 / n2;
		break;
	default:
		break;
	}
}

int main()
{
	double result;

	calc(10, '+', 20, &result);
	printf("10 + 20 = %g\n", result);
	calc(10, '-', 20, &result);
	printf("10 - 20 = %g\n", result);
	calc(10, '*', 20, &result);
	printf("10 * 20 = %g\n", result);
	calc(10, '/', 20, &result);
	printf("10 / 20 = %g\n", result);

	return 0;
}
