// 포인터를 통한 구조체 참조
#include <stdio.h>

struct student
{
	int number;
	char name[20];
	double grade;
};

int main()
{
	struct student s = { 20170001, "홍길동", 4.3 };
	struct student *p;

	p = &s;

	printf("학번 = %d 이름 = %s 학점 = %f\n", s.number, s.name, s.grade);
	printf("학번 = %d 이름 = %s 학점 = %f\n", (*p).number, (*p).name, (*p).grade);
	printf("학번 = %d 이름 = %s 학점 = %f\n", p->number, p->name, p->grade);

	return 0;
}
