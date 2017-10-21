#include <stdio.h>

int main(void)
{
	int data;

	printf("16진수 정수를 입력하시오");
	scanf("%x", &data);

	printf("8진수로는 %#o입니다\n", data);
	printf("10진수로는 %d입니다\n", data);
	printf("16진수로는 %#x입니다\n", data);

	return 0;
}