#include <stdio.h>

int recursive(int n, int k)
{
	if (n == k || k == 0)
		return 1;

	else
		return recursive(n - 1, k - 1) + recursive(n - 1, k);
}

int main()
{
	printf("3C2 = %d\n", recursive(3, 2));
	printf("7C4 = %d\n", recursive(7, 4));

	return 0;
}
