#include <stdio.h>

struct student
{
	int number;
	char name[20];
	double grade;
};

struct student list[] =
{
	{ 20120001, "홍길동", 4.2},
	{ 20120002, "김철수", 3.2},
	{ 20120002, "김영희", 3.0 }
};

int main()
{
	struct student super_stu;
	int size;

	size = sizeof(list) / sizeof(list[0]);

	super_stu = list[0];

	for (int i = 1; i < size; i++)
	{
		if (list[i].grade > super_stu.grade)
		{
			super_stu = list[i];
		}
	}

	printf("평점이 가장 높은 학생은 (이름 : %s, 학번 : %d, 평점 : %f)입니다.\n", super_stu.name, super_stu.number, super_stu.grade);

	return 0;
}
