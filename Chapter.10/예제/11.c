#include <stdio.h>

#define SIZE 5

int main()
{
	int data[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		printf("정수를 입력하세요 : ");
		scanf("%d", &data[i]);
	}

	for (int i = (SIZE - 1); i >= 0; i--)
	{
		printf("%d ", data[i]);
	}
	return 0;
}
