// while문을 이용한 합계 프로그램
#include <Stdio.h>

int main()
{
	int i, n, sum;

	i = 0;			// 변수 초기화
	sum = 0;		// 변수 초기화

	while (i < 5)
	{
		printf("값을 입력하시오 : ");
		scanf("%d", &n);
		sum = sum + n;		// sum += n;과 같다
		i++;
	}
	printf("합계는 %d입니다.\n", sum);

	return 0;
}
