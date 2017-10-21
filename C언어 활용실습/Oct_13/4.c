#include <stdio.h>

struct people
{
	char name[100];
	int y;
	int m;
	int d;
};
struct student
{
	struct people std;
	int identity;
};

int main()
{
	struct student s;

	printf("define struct and input struct\n");
	printf("input name : ");
	scanf("%s", &s.std.name);
	printf("input student identity : ");
	scanf("%d", &s.identity);
	printf("input birthday year : ");
	scanf("%d", &s.std.y);
	printf("input birthday month : ");
	scanf("%d", &s.std.m);
	printf("input birthday day : ");
	scanf("%d", &s.std.d);

	printf("input data is identity : %d    name : %s    birthday : %d / %d / %d\n", s.identity, s.std.name, s.std.y, s.std.m, s.std.d);

	return 0;
}
