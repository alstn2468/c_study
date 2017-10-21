#include <stdio.h>

int main()
{
	int num;
	int *p;
	int result = 0;


	p = &num;


	printf("input number : ");
	scanf("%d", p);

	for (int i = 2; *p > i; i++)
	{
		if (*p % i == 0)
		{
			result = 1;
			break;
		}
		else
			result = 0;
	}

	if (result == 1)
		printf("%d is not prime number\n", *p);
	else
		printf("%d is prime number\n", *p);

	return 0;
}
