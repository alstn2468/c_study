#include <stdio.h>

int main()
{
	int number;

	printf("정수를 입력하시오 : ");
	scanf("%d\n", &number);

	for (int x = 1; x <= number; x++)
	{
		for (int y = 1; y <= x; y++)
			printf("%d ", y);

		printf("\n");
	}

	return 0;
}
