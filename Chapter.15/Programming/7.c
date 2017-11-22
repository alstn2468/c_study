#include <stdio.h>
#define GET_BIT(n, pos) ((n) & (1 << (pos)))

void display_bit(int value)
{
	for (int i = 31; i >= 0; i--)
	{
		if (GET_BIT(value, i))
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
	printf("\n\n");
}

int main()
{
	int n;

	printf("정수 값을 입력하시오 : ");
	scanf("%d", &n);

	printf("\n");
	display_bit(n);

	return 0;
}
