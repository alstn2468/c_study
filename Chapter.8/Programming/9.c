#include <stdio.h>

int print_value(int n);

int main()
{
	int number;

	printf("값을 입력하세요(종료는 음수) : ");
	scanf("%d", &number);

	if (number > 0)
	{
		for (int i = 0; i < number; i++)
		{
			print_value(number);
		}
	}
	return 0;
}

int print_value(int n)
{
	if (n > 0)
	{
		return printf("*");
	}
	else
	{
		return 0;
	}
}
