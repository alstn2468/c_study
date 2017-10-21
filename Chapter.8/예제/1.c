// 정수의 제곱을 계산하는 함수 예제
#include <stdio.h>

int square(int n);

int main()
{
	int result;

	result = square(5);

	printf("%d \n", result);

	return 0;
}

int square(int n)
{
	return(n * n);
}
