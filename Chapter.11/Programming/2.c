#include <stdio.h>

void get_sum_diff(int x, int y, int *p_sum, int *p_diff);

int main()
{
	int num1, num2;
	int sum, diff;

	printf("첫번째 수를 입력하세요 : ");
	scanf("%d", &num1);
	printf("두번째 수를 입력하세요 : ");
	scanf("%d", &num2);

	get_sum_diff(num1, num2, &sum, &diff);

	printf("두 수의 합은 : %d\n", sum);
	printf("두 수의 차는 : %d\n", diff);

	return 0;
}

void get_sum_diff(int x, int y, int *p_sum, int *p_diff)
{
	*p_sum = x + y;

	if (x > y)
	{
		*p_diff = x - y;
	}
	else
	{
		*p_diff = y - x;
	}
}
