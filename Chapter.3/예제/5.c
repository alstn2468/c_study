/* 환율을 계산하는 프로그램 */
#include <stdio.h>

int main(void)
{
	float rate; 	//원/달러환율
	float usd;	//달러화
	int krw;	//원화

	printf("달러에 대한 원화 환율을 입력하시오 : ");		//입력 안내 메세지
	scanf("%f", &rate);						//사용자로부터 환율입력

	printf("원화 금액을 입력하시오 : ");				//입력 안내 메세지
	scanf("%d", &krw);						//원화 금액 입력

	usd = krw/rate;							//달러화로 환산

	printf("원화 %d원은 %f달러입니다.\n", krw, usd);		//계산 결과 출력

	return 0;							//함수 결과값 반환
}