#include <stdio.h>

int is_leap(int year);

int main()
{
	int n;

	printf("연도를 입력하시오 : ");
	scanf("%d", &n);

	if (is_leap(n) == 1)
	{
		printf("%d년은 366일 입니다.\n", n);
	}
	else
	{
		printf("%d년은 365일 입니다.\n", n);
	}
	return 0;
}

int is_leap(int year)
{
	return (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0);
}
