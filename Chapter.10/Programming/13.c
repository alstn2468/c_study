#include <stdio.h>

void show_digit(int n);

int main()
{
	int n;

	printf("2진수로 바꾸고싶은 수를 입력하세요 : ");
	scanf("%d", &n);

	show_digit(n);

	return 0;
}

void show_digit(int n)
{
	int binary[32] = { 0 };
	int i;

	for (i = 0; i < 32 && n > 0; i++)
	{
		binary[i] = n % 2;
		n = n / 2;
	}
	for (i--; i >= 0; i--)
	{
		printf("%d", binary[i]);
	}
	printf("\n");
}
