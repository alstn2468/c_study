#include <stdio.h>


int max(int n1, int n2)
{
	if (n1 > n2)
	{
		return n1;
	}
	else
	{
		return n2;
	}
}
int diff(int n1, int n2)
{
	if (n1 > n2)
	{
		return (n1 - n2);
	}
	else
	{
		return (n2 - n1);
	}
}

int  main()
{
	int n1, n2;
	int maxValue;
	int diffValue;

	printf("input two numbers : ");
	scanf("%d %d", &n1, &n2);

	maxValue = max(n1, n2);
	diffValue = diff(n1, n2);
	printf("max value is %d\n", maxValue);
	printf("max value - min value = %d\n", diffValue);
	return 0;
}
