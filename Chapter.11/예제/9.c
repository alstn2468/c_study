// 포인터와 배열의 관계
#include <stdio.h>

int main()
{
	int a[] = { 10, 20, 30, 40, 50 };

	printf("&a[0] = %u\n", &a[0]);
	printf("&a[1] = %u\n", &a[1]);
	printf("&a[2] = %u\n", &a[2]);

	printf("a = %u\n", a);

	return 0;
}
