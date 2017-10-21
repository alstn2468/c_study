#include <stdio.h>

int get_tax(int income);

int main()
{
	int income, tax;

	printf("소득을 입력하세요(만원) : ");
	scanf("%d", &income);

	tax = get_tax(income);

	printf("소득세는 %d만원 입니다.\n", tax);

	return 0;
}

int get_tax(int money)
{
	if (money > 1000)
	{
		return (money * 0.1);
	}
	else
	{
		return (money * 0.08);
	}
}
