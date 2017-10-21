#include <stdio.h>

int main(void)
{
	const double SQMETER_PER_PYEONG=3.3058;
	double pyeong, m;

	printf("평을 입력하세요");
	scanf("%lf", &pyeong);

	m = pyeong * SQMETER_PER_PYEONG;

	printf("%lf평방미터입니다", m);

	return 0;
}