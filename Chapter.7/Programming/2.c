#include <stdio.h>

int main()
{
	int number, sum = 0;

	while (scanf("%d", &number) != EOF)
	{
		sum += number;
	}
	printf("정수의 합은 %d입니다.\n", sum);

	return 0;
}
