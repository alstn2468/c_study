#include <stdio.h>

int main()
{
	int list[3][10] = { 0 };
	int value;

	for (int i = 0; i < 10; i++)
	{
		list[0][i] = i;
		list[1][i] = i*i;
		list[2][i] = i*i*i;
	}
	printf("정수를 입력하시오 : ");
	scanf("%d", &value);

	for (int i = 0; i < 10; i++)
	{
		if (value == list[2][i])
		{
			printf("%d의 세제곱근은 %d입니다.\n", value, i);
		}
	}
	return 0;
}
