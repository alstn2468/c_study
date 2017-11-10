// 이증 포인터 프로그램
#include <stdio.h>

int main()
{
	int i = 100;				// 정수 변수 선언
	int *p = &i;				// 포인터 p는 i를 가리킨다.
	int **q = &p;				// 이중포인터 q는 p를 가리킨다.

	*p = 200;						// p를 통하여 i에 200 저장

	printf("i = %d\n", i);

	**q = 300;					// q를 통하여 i에 300 저장

	printf("i = %d\n", i);

	return 0;
}
