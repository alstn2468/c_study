//while 문을 이용한 제곱값 출력 프로그램
#include <Stdio.h>

int main()
{
	int n;

	printf("==============\n");
	printf("  n    n의제곱\n");
	printf("==============\n");

	n = 1;
	while (n <= 10)
	{
		printf("%5d     %5d\n", n, n*n);
		n++;
	}

	return 0;
}
