#include <stdio.h>
#define SIZE 10

void convert(double *grades, double *scores, int size);

int main()
{
	double std_grade[SIZE], std_score[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		printf("학생 %d의 평점을 입력하세요 ex) 4. 3 : ", i + 1);
		scanf("%lf", &std_grade[i]);
	}

	convert(std_grade, std_score, SIZE);

	for (int i = 0; i < SIZE; i++)
	{
		printf("학생 %d의 평점은 %.2f이고 변환한 점수는 %.2f입니다.\n", i + 1, std_grade[i], std_score[i]);
	}

	return 0;
}

void convert(double *grades, double *scores, int size)
{
	for (int i = 0; i < size; i++)
	{
		scores[i] = ((100 / 4.3) * grades[i]);
	}
}
