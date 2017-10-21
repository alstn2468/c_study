#include <stdio.h>

int main()
{
	int i, a = 0, b = 1, c, n;

	printf("몇번째 항까지 구할까요? : ");
	scanf("%d", &n);

	for (i = 0; i <= n; i++)
	{
		printf("%d, ", a);

		c = a + b;
		a = b;
		b = c;
	}
	return 0;
}
