#include <stdio.h>

int main()
{
	int tf_grade, tc_grade, result1, result2;
	double grade;

	printf("평균 학점을 입력해주세요.");
	scanf("%lf", &grade);
	printf("토플 점수를 입력해주세요.");
	scanf("%d", &tf_grade);
	printf("토익점수를 입력해주세요.");
	scanf("%d", &tc_grade);

	result1 = (tf_grade >= 300) || (tc_grade >= 700);
	result2 = (grade >= 3.0) && (result1 == 1);

	if (result2 == 1)
	{
		printf("가능합니다.");
	}
	else
	{
		printf("불가능합니다.");
	}
	return 0;
}
