#include <stdio.h>

int main()
{
	int i = 1, sum = 0;

	do
	{
		i++;

		if (i % 3 == 0)
			sum += i;
	} while (i <= 100);

	printf("1부터 100사이의 모든 3의 배수의 합은 %d입니다.\n", sum);

	return 0;
}
