#include <stdio.h>

#define MINUTE 60
#define HOUR 60
#define DAY 24

int main()
{
	int sec;

	printf("매크로를 이용하여 입력받은 초가 각 몇분, 몇시간, 몇일에 해당하는지 계산\n");

	printf("초입력 : ");
	scanf("%d", &sec);

	printf("%d초는 %0.2f분 입니다.\n", sec, ((double)sec / MINUTE));
	printf("%d초는 %0.2f시간 입니다.\n", sec, ((double)sec / MINUTE / HOUR));
	printf("%d초는 %0.2f일 입니다.\n", sec, ((double)sec / MINUTE / HOUR / DAY));

	return 0;
}
