#include <stdio.h>
#define intSwap(a, b) {int tmp; tmp = a; a = b; b= a;}
#define charSwap(c, d) {char tmp; tmp = c; c= d; d = tmp;}

int main()
{
	int a = 3, b = 2;

	printf("매크로 함수를 이용하여 두 변수를 스왑\n");
	printf("a = %d, b = %d\n", a, b);
	printf("intSwap 매크로 함수 호출");
	intSwap(a, b);
	printf("\na = %d, b = %d\n", a, b);

	char c = 'c', d = 'd';

	printf("c = '%c', d = '%c'\n", c, d);
	printf("charSwap 매크로 함수 호출");
	charSwap(c, d);
	printf("\nc = '%c', d = '%c'\n", c, d);

	return 0;
}
