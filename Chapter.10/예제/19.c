#include <stdio.h>

#define CLASSES 3
#define STUDENTS 5

int main()
{
	int s[CLASSES][STUDENTS] =
	{
		{0,1,2,3,4},
		{10,11,12,13,14},
		{20,21,22,23,24},
	};
	int total, subtotal;

	total = 0;

	for (int clas = 0; clas < CLASSES; clas++)
	{
		subtotal = 0;
		for (int student = 0; student < STUDENTS; student++)
		{
			subtotal += s[clas][student];
		}
		printf("학급 %d의 평균 성적 = %d\n", clas, subtotal / STUDENTS);

		total += subtotal;
	}

	printf("전체 학생들의 평균 성적 = %d\n", total / (CLASSES * STUDENTS));

	return 0;
}
