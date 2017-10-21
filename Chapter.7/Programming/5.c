#include <stdio.h>

int main()
{
	int number;

	printf("카운터의 초기값을 입력하시오 : ");
	scanf("%d\n", &number);

	for (int x = number; x >= 1; x--)
	{
		printf("%d ", x);
	}
	printf("\a");

	return 0;
}
