#include <stdio.h>
#include <stdlib.h>

void get_stat_per_test(int score[][3]);

int main()
{
	int score[10][3];

	for (int i = 0; i < 10; i++)
	{
		for (int k = 0; k < 3; k++)
		{
			score[i][k] = rand() % 100 + 1;
		}
	}
	get_stat_per_test(score);

	return 0;
}

void get_stat_per_test(int score[][3])
{
	int min, max, sum;

	for (int k = 0; k < 3; k++)
	{
		min = max = score[0][k];
		sum = 0;
		for (int i = 0; i < 10; i++)
		{
			if (score[i][k] < min)
			{
				min = score[i][k];
			}
			if (score[i][k] > max)
			{
				max = score[i][k];
			}
			sum += score[i][k];
		}
		printf("시험 %d\n", k+1);
		printf("최대점수 = %d\n", max);
		printf("최저점수 = %d\n", min);
	}
}
