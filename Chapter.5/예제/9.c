include <stdio.h>

int main()
{
	int x, y;

	printf("두개의 정수를 입력하시오 : ");
	scanf("%d%d", &x, &y);

	printf("x == y 의 결과 값 :  %d\n", x == y);
	printf("x != y 의 결과 값 :  %d\n", x != y);
	printf("x > y 의 결과 값 : %d\n", x > y);
	printf("x < y 의 결과값 : %d\n", x < y);
	printf("x >= y 의 결과값 : %d\n", x >= y);
	printf("x <= y 의 결과값 : %d\n", x <= y);

	return 0;
}
