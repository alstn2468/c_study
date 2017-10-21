#include <stdio.h>

int main()
{
	int grade, num_class, total_grade = 0;
	int *p, *q, *t;

	p = &grade;
	q = &num_class;
	t = &total_grade;

	printf("input number of classes ");
	scanf("%d", q);

	for (int i = 1; *q >= i; i++)
	{
		printf("input %d class grade : ", i);
		scanf("%d", p);
		*t = *t + *p;
	}

	printf("total grade is %d\n", *t);
	printf("average is %f\n", (double)*t / *p);

	return 0;
}
