#include <stdio.h>

void print_reverse(int a[], int n);

int main()
{
	int a[] = { 10, 20, 30, 40, 50 };

	print_reverse(a, 5);

	return 0;
}

// 배열의 원소를 역순으로 출력
void print_reverse(int a[], int n)
{
	int *p = a + n - 1;

	while (p >= a)
		printf("%d\n", *p--);
}
