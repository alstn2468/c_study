#include <stdio.h>
#define SIZE(arr) sizeof(arr) / sizeof(arr[0])

int main()
{
	int intArr[] = { 1, 2, 3, 4, 5, 6 };
	char charArr[] = { 'a', 'b', 'c', 'd' };
	short shortArr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	double doubleArr[] = { 1.1, 2.2, 3.3 };
	float floatArr[] = { 1.2, 2.3, 3.4, 4.5, 5.6, 7.8 };
	long longArr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };

	printf("매크로 함수를 이용한 배열의 개수 계산\n");
	printf("intArr의 개수 : %d\n", SIZE(intArr));
	printf("charArr의 개수 : %d\n", SIZE(charArr));
	printf("shortArr의 개수 : %d\n", SIZE(shortArr));
	printf("doubleArr의 개수 : %d\n", SIZE(doubleArr));
	printf("floatArr의 개수 : %d\n", SIZE(floatArr));
	printf("longArr의 개수 : %d\n", SIZE(longArr));

	return 0;
}
