#include <stdio.h>

int main(void)
{
	const double SQMETER_PER_PYEONG=3.3058;
	double pyeong, m;

	printf("���� �Է��ϼ���");
	scanf("%lf", &pyeong);

	m = pyeong * SQMETER_PER_PYEONG;

	printf("%lf�������Դϴ�", m);

	return 0;
}