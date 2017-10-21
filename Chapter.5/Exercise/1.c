#include <stdio.h>

int main()
{
	int i = -3, j = 2, k = 0, m;

	m = ++i && ++j && ++k;
	// i = -2, k = 3, k = 1 전위 증가연산자 실행후  AND 논리연산자 실행 m = 1
	printf("%d, %d, %d, %d\n", i, j, k, m);

	return 0;
}
