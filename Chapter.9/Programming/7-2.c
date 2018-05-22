#include<stdio.h>

int func(int n, int k)
{
	int i, j, m, result;
	int nfac = 1, kfac = 1, n_kfac = 1;

	if (k == 0 || n == k)
		return 1;

	else
	{
		for (i = n; i > 0; i--)
			nfac *= i;

		for (j = k; j > 0; j--)
			kfac *= j;

		for (m = n - k; m > 0; m--)
			n_kfac *= m;

		result = nfac / (kfac * n_kfac);
	}

	return result;
}

int main()
{
	printf("3C2 = %d\n", func(3, 2));
	printf("7C4 = %d\n", func(7, 4));

	return 0;

}
