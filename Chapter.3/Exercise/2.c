/*첫번째 프로그램*/
#include <stdio.h>

int main(void)
{
	int x;
	int y;
	float prod;
	
	scanf("%d", &x);
	scanf("%d", &y);
	prod = x * y;
	
	printf("곱셈의 결과 = %f", prod);

	return 0;
}