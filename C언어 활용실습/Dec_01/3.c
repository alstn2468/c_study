#include <stdio.h>
#include <stdlib.h>
#define MAX 100

struct Student
{
	char std_num[10];
	char name[10];
	int kor;
	int eng;
	int mat;
};

int main()
{
	FILE *fp = NULL;
	FILE *fp2 = NULL;
	Student std[MAX];
	Student tmp;
	int i = 0;
	double avg[MAX] = { 0 };
	double avg_tmp;

	if ((fp = fopen("score.txt", "r")) == NULL)
	{
		fprintf(stderr, "원본 파일을 열 수 없습니다.\n");
		exit(1);
	}

	if ((fp2 = fopen("desc.txt", "w")) == NULL)
	{
		fprintf(stderr, "원본 파일을 열 수 없습니다.\n");
		exit(1);
	}

	while (!feof(fp))
	{
		fscanf(fp, "%s %s %d %d %d", std[i].std_num, std[i].name, &std[i].kor, &std[i].eng, &std[i].mat);

		avg[i] = (std[i].kor + std[i].eng + std[i].mat) / 3.0;
		i++;
	}

	for (int l = 0; l < MAX - 1; l++)
	{
		for (int j = l; j < MAX; j++)
		{
			if (avg[l] < avg[j])
			{
				tmp = std[l];
				std[l] = std[j];
				std[j] = tmp;
				avg_tmp = avg[l];
				avg[l] = avg[j];
				avg[j] = avg_tmp;
			}
		}
	}

	i = 0;

	while (avg[i] != 0)
	{
		fprintf(fp2, "%s %s %d %d %d %0.2f\n", std[i].std_num, std[i].name, std[i].kor, std[i].eng, std[i].mat, avg[i]);
		i++;
	}

	fclose(fp);

	return 0;
}
