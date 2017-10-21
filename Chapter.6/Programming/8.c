#include <stdio.h>

int main()
{
	int time, age, ticket;

	printf("현재 시간과 나이를 입력하시오(시간, 나이) : ");
	scanf("%d %d", &time, &age);

	if (time < 17)
	{
		if (age < 3)
			ticket = 0;
		else if (age >= 65 || age <= 12)
			ticket = 25000;
		else
			ticket = 34000;
	}
	else {
		if (age < 3)
			ticket = 0;
		else
			ticket = 10000;
	}

	printf("요금은 %d입니다.\ㅜ", ticket);

	return 0;
}
