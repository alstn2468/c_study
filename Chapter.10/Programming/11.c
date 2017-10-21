#include <stdio.h>

int location[] = { 1,1,2,5,3,3,1,1,2,4 };

int main()
{
	int product;

	printf("상품 번호를 입력하시오 : ");
	scanf("%d", &product);

	if (product < 0 || product >= 10)
	{
		printf("잘못된 상품 번호 입니다.\n");
	}
	else
		printf("상품번호 %d의 위치는 %d입니다.\n", product, location[product]);

	return 0;
}
