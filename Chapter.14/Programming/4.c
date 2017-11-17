#include <stdio.h>

void set_max_ptr(int m[], int size, int **pmax);

int main()
{
	int m[6] = { 5, 6, 1, 3, 7, 9 };
	int *pmax;							// 배열 m의 원소 중에서 가장 큰 값을 pmax가 가리킨다.

	set_max_ptr(m, 6, &pmax);

	printf("배열 m의 최댓값 = %d\n", *pmax);

	return 0;
}

void set_max_ptr(int m[], int size, int **pmax)
{
	*pmax = &m[0];

	for (int i = 0; i < size; i++)
	{
		if (**pmax < m[i])
		{
			**pmax = m[i];
		}
	}
}
