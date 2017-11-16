// 다차원 배열과 포인터
#include <stdio.h>

int main()
{
	int m[3][3] = { 10, 20, 30, 40, 50, 60, 70, 80, 90 };

	printf("m = %p\n", m);				// 배열의 시작주소
	printf("m[0] = %p\n", m[0]);		// 0행의 시작주소
	printf("m[1] = %p\n", m[1]);		// 1행의 시작주소
	printf("m[2] = %p\n", m[2]);		// 2행의 시작주소
	printf("&m[0][0] = %p\n", &m[0][0]);
	printf("&m[1][0] = %p\n", &m[1][0]);
	printf("&m[2][0] = %p\n", &m[2][0]);

	return 0;
}
