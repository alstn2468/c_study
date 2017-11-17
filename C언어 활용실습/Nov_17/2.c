#include <stdio.h>
#define func_tri(x) ((x) * (x) * (x))

int main()
{
	int n;

	printf("매크로 함수를 이용한 세제곱 계산\n");

	printf("정수 입력 : ");
	scanf("%d", &n);

	printf("%d의 세제곱은 %d이다.\n", n,func_tri(n));

	return 0;
}
