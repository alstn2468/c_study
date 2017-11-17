#include <stdio.h>

double get_average(int list[], int n);

int main()
{
	int score[3][3] =
	{
		{100, 30, 67},
		{89, 59, 12},
		{19, 69, 90}
	};

	double avg;

	for (int i = 0; i < 3; i++)
	{
		avg = get_average(score[i], 3);

		printf("%d행의 평균값 = %0.2f\n", i, avg);
	}

	return 0;
}

double get_average(int list[], int n)
{
	double sum = 0.0;

	for (int i = 0; i < n; i++)
	{
		sum += list[i];
	}

	return sum / (double)n;
}
