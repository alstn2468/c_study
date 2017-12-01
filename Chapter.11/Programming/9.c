#include <stdio.h>
#define SIZE 3

int search(int *A, int size, int search_value);

int main()
{
	int people_num, search_val, index;
	int sal[SIZE];

	for (people_num = 0; people_num < SIZE; people_num++)
	{
		printf("사원 %d의 월급을 입력하세요 000만원 : ", people_num + 1);
		scanf("%d", &sal[people_num]);
	}

	printf("찾고자하는 월급 값을 입력하세요 : ");
	scanf("%d", &search_val);

	index = search(sal, SIZE, search_val);

	if (index != -1)
	{
		printf("%d만원의 월급을 받는 사원은 %d입니다.\n", search_val, index + 1);
	}
	else
	{
		printf("%d만원의 월급을 받는 사원은 없습니다.\n", search_val);
	}
	return 0;
}

int search(int *A, int size, int search_value)
{
	for (int i = 0; i < size; i++)
	{
		if (A[i] == search_value)
		{
			return i;
		}
	}
	return -1;
}
