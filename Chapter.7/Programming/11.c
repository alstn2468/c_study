#include <stdio.h>

int main()
{
	int n, result = 0;

	printf("n의 값을 입력하시오 : ");
	scanf("%d", &n);

	for (int i = 0; i <= n; i++)
	{
		result = result + (i*i);
	}
	printf("계산값은 %d입니다.\n", result);

	return 0;
}
