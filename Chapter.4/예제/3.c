#include <stdio.h>

int main(void)
{
	int usd;	//달러화
	int krw;	//원화

	printf("달러화 금액을 입력하시오 : ");
	scanf("%d", &usd);

	krw = 1120 * usd;

	printf("달러화 %d달러는 %d원입니다.", usd, krw);

	return 0;
}