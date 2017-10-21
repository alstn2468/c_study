// if 문을 사용하여 홀수와 짝수를 구별하는 프로그램
#include <stdio.h>

int main()
{
	int number;

	printf("정수를 입력하시오 : ");
	scanf("%d", &number);

	if (number % 2 == 0)
		printf("입력된 정수는 짝수입니다.\n");
	else
		printf("입력된 정수는 홀수입니다.\n");

	return 0;
}
