#include <stdio.h>

float get_average(float a[], int n);

int main()
{
	float grade[3] = { 10.0,20.0,30.0 };
	float average;

	average = get_average(grade, 3);

	printf("성적의 평균은 %f입니다.\n", average);

	return 0;
}

float get_average(float a[], int n)
{
	float average, sum = 0.0;

	for (int i = 0; i < 3; i++)
	{
		sum += a[i];
	}
	average = sum / 3.0;

	return average;
}
