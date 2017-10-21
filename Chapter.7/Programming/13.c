#include <stdio.h>

int main()
{
	int n, r, result, i;

	printf("n의 값 : ");
	scanf("%d", &n);
	printf("r의 값 : ");
	scanf("%d", &r);

	result = 1;

	for (i = 0; i < r; i+=1)
	{
		result = result * (n-i);
	}
	printf("순열의 값은 %d입니다.\n", result);

	return 0;
}
