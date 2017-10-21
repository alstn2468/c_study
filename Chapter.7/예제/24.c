// 달력 출력
#include <stdio.h>

#define START_DAY		3				// 첫번째 날이 수요일
#define DAYS_OF_MONTH		31			// 달의 일수

int main()
{
	int day, date;

	printf("=======================\n");
	printf("일 월 화 수 목 금 토 \n");
	printf("=======================\n");

	for (day = 0; day < START_DAY	; day++);
		printf(" 	 ");
	for (date = 1; date <= DAYS_OF_MONTH	; date++)
	{
		if (day == 7)
		{
			day = 0;						// 일요일이면 줄바꿈을 출력
			printf("\n");
		}
		day++;
		printf("%2d ", date);				// 날을 출력한다.
	}
	printf("\n=======================\n");

	return 0;
}
