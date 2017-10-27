// 주소 연산자
#include <stdio.h>

int main()
{
	int i = 10;
	char c = 69;
	double f = 12.3;

	printf("i의 주소 : %u\n", &i);		// 변수 i의 주소출력
	printf("c의 주소 : %u\n", &c);		// 변수 c의 주소출력
	printf("f의 주소 : %u\n", &f);		// 변수 f의 주소출력

	return 0;
}
