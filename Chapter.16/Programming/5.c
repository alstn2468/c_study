#include <stdio.h>

struct student
{
	char name[100];
	int kor;
	int eng;
	int math;
};

int main()
{
	FILE *fp1 = NULL;
	FILE *fp2 = NULL;
	char buffer[100];
	student std;

	fp1 = fopen("sample.txt", "r");
	if (fp1 == NULL)
	{
		printf("파일 열기 실패\n");
		return 0;
	}

	fp2 = fopen("sample1.txt", "w");
	if (fp2 == NULL)
	{
		printf("파일 열기 실패\n");
		return 0;
	}

	while (fgets(buffer, 100, fp1) != NULL)
	{
		sscanf(buffer, "%s %d %d %d", std.name, &std.kor, &std.math, &std.eng);
		fprintf(fp2, "%s", std.name);
		fprintf(fp2, "%10.2f\n", (std.kor + std.eng + std.math) / 3.0);
	}

	fclose(fp1);
	fclose(fp2);

	return 0;
}
