#include <stdio.h>

struct Date
{
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int second;
};

void calculate(struct Date *date, int hour, int minute, int seconds);

int main()
{
	struct Date d;
	struct Date *pd;
	int hour, minute, second;

	pd = &d;

	printf("Define Date Struct and calculate add time via funciton\n");
	printf("Input Date(year month day hour minute seconds) : ");
	scanf("%d %d %d %d %d %d", &(*pd).year, &(*pd).month, &(*pd).day, &(*pd).hour, &(*pd).minute, &(*pd).second);
	printf("Input hour : ");
	scanf("%d", &hour);
	printf("Input minute : ");
	scanf("%d", &minute);
	printf("Input seconds : ");
	scanf("%d", &second);

	printf("before date\n");
	printf("%d-%d-%d %d:%d:%d\n", (*pd).year, (*pd).month, (*pd).day, (*pd).hour, (*pd).minute, (*pd).second);

	printf("add %d:%d:%d date\n", hour, minute, second);
	calculate(pd, hour, minute, second);

	return 0;
}

void calculate(struct Date *date, int hour, int minute, int seconds)
{
	struct Date d;
	d.month = (*date).month;
	d.year = (*date).year;
	d.day = (*date).day;
	d.minute = ((*date).minute) + minute;
	d.second = ((*date).second) + seconds;
	d.hour = ((*date).hour) + hour;
	printf("%d-%d-%d %d:%d:%d\n", d.year, d.month, d.day, d.hour, d.minute, d.second);
}
