#include <Stdio.h>

int main()
{
	int i, n, sum;

	printf("정수를 입력하세요 : ");
	scanf("%d", &n);

	i = 1;
	sum = 0;

	while (i <= n)
	{
		sum += i;			// sum = sum + i;와 같다
		i++;				// i = i + 1과 같다.
	}

	printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);

	return 0;
}
