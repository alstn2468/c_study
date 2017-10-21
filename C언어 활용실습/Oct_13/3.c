#include <stdio.h>

struct yesterday
{
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int second;
};

struct today
{
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int second;
};

int main()
{
	struct yesterday s1 = { 2017,10,12,16,30,25 };
	struct today s2 = { 2017,10,13,16,30,25 };

	printf("compare with struct\n");

	printf("yesterday. year = %d\n", s1.year);
	printf("yesterday. month = %d\n", s1.month);
	printf("yesterday. day = %d\n", s1.day);
	printf("yesterday. hour = %d\n", s1.hour);
	printf("yesterday. minute = %d\n", s1.minute);
	printf("yesterday. second = %d\n", s1.second);
	printf("\n");
	printf("today. year = %d\n", s2.year);
	printf("today. month = %d\n", s2.month);
	printf("today. day = %d\n", s2.day);
	printf("today. hour = %d\n", s2.hour);
	printf("today. minute = %d\n", s2.minute);
	printf("today. second = %d\n", s2.second);

	if (s1.day == s2.day)
	{
		printf("equal date\n");
	}
	else
		printf("not equal date\n");
	printf("\n");

	printf("yesterday + 1 day\n");
	s1.day += 1;
	printf("yesterday. year = %d\n", s1.year);
	printf("yesterday. month = %d\n", s1.month);
	printf("yesterday. day = %d\n", s1.day);
	printf("yesterday. hour = %d\n", s1.hour);
	printf("yesterday. minute = %d\n", s1.minute);
	printf("yesterday. second = %d\n", s1.second);
	printf("\n");
	printf("today. year = %d\n", s2.year);
	printf("today. month = %d\n", s2.month);
	printf("today. day = %d\n", s2.day);
	printf("today. hour = %d\n", s2.hour);
	printf("today. minute = %d\n", s2.minute);
	printf("today. second = %d\n", s2.second);

	if (s1.day == s2.day)
	{
		printf("equal date\n");
	}
	else
		printf("not equal date\n");

	return 0;
}
