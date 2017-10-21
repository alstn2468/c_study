// 거듭 제곱 값을 구하는 예제
#include <stdio.h>

int get_integer();
int power(int x, int y);

int main()
{
	int a, b;

	a = get_integer();
	b = get_integer();

	printf("%d의 %d승은 %d입니다.\n", a, b, power(a, b));

	return 0;
}

// 사용자로부터 값을 입력받아서 반환
int get_integer()
{
	int n;

	printf("정수를 입력하시오 : ");
	scanf("%d", &n);

	return n;
}
// 거듭제곱 값을 계산해서 반환
int power(int x, int y)
{
	int i;
	long result = 1;					// 1로 초기화

	for (i = 0; i < y; i++)
	{
		result *= x;					// result = result * x;
	}
	return result;
}
