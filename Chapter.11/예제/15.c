// 포인터와 함수
#include <stdio.h>

void swap(int *px, int *py);

int main()
{
	int a = 100, b = 200;

	printf("a = %d b = %d\n", a, b);
	swap(&a, &b);
	printf("a = %d b = %d\n", a, b);

	return 0;
}

void swap(int *px, int *py)
{
	int tmp;

	tmp = *px;		// tmp = a;
	*px = *py;		// a = b;
	*py = tmp;		// b = tmp;
}
