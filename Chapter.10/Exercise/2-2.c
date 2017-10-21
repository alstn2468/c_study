#include <stdio.h>

int main()
{
	float grade[3] = { 10.0,20.0,30.0 };
	float average, sum = 0.0;

	for (int i = 0; i < 3; i++)
	{
		sum += grade[i];
	}
	average = sum / 3.0;

	printf("성적의 평균은 %f입니다.\n", average);

	return 0;
}
