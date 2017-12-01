#include <stdio.h>
#define SIZE 10

void array_add(int *A, int *B, int *C, int size);

int main()
{
	int sal[SIZE], bon[SIZE], tot[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		printf("직원 %d의 기본급을 입력하세요 000만원 : ", i + 1);
		scanf("%d", &sal[i]);
		printf("직원 %d의 보너스를 입력하세요 000만원 : ", i + 1);
		scanf("%d", &bon[i]);
	}

	array_add(sal, bon, tot, SIZE);

	for (int i = 0; i < SIZE; i++)
	{
		printf("직원 %d의 월급의 총액은 %d만원 입니다.\n", i + 1, tot[i]);
	}

	return 0;
}

void array_add(int *A, int *B, int * C, int size)
{
	for (int i = 0; i < size; i++)
	{
		C[i] = A[i] + B[i];
	}
}
