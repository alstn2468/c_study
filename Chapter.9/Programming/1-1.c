#include <stdio.h>
#define TRUE 1

int add(int, int);
int sub(int, int);
int mul(int, int);
double div(int, int);

int main()
{
	char op;
	int x, y;

	do
	{
		printf("연산을 입력 하시오 : ");
		scanf("%d %c %d", &x, &op, &y);

		switch (op)
		{
		case '+' :
			printf("연산 결과 : %d\n", add(x, y));
			break;

		case '-' :
			printf("연산 결과 : %d\n", sub(x, y));
			break;

		case '*' :
			printf("연산 결과 : %d\n", mul(x, y));
			break;

		case '/' :
			printf("연산 결과 : %.2f\n", div(x, y));
			break;

		default :
			printf("지원 되지 않는 연산자 입니다.\n");
			break;
		}

		printf("\n");

	} while (TRUE);

	return 0;
}

int add(int x, int y)
{
	static int count = 0;
	printf("덧셈은 총 %d번 실행되었습니다.\n", ++count);

	return x + y;
}

int sub(int x, int y)
{
	static int count = 0;
	printf("뺄셈은 총 %d번 실행되었습니다.\n", ++count);

	return x - y;
}

int mul(int x, int y)
{
	static int count = 0;
	printf("곱셈은 총 %d번 실행되었습니다.\n", ++count);

	return x * y;
}

double div(int x, int y)
{
	static int count = 0;
	printf("나눗셈은 총 %d번 실행되었습니다.\n", ++count);

	return (double)x / y;
}
