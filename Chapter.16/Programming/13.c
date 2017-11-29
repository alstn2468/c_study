#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *fp1, *fp2;
	char file1[100], file2[100];
	char buffer[100];

	printf("원본파일 이름 : ");
	scanf("%s", file1);

	printf("복사파일 이름 : ");
	scanf("%s", file2);

	if ((fp1 = fopen(file1, "r")) == NULL)
	{
		fprintf(stderr, "파일 %s를 열 수 없습니다.\n", file1);
		exit(1);
	}

	if ((fp2 = fopen(file2, "w")) == NULL)
	{
		fprintf(stderr, "파일 %s를 열 수 없습니다.\n", file2);
		exit(1);
	}

	while (fgets(buffer, 100, fp1) != NULL);
	{
		char *p = strtok(buffer, " ");

		while (p != NULL)
		{
			if (strcmp("Android", p) == 0)
			{
				fprintf(fp2, "안드로이드 ");
			}
			else
			{
				fprintf(fp2, "%s ", p);
			}
			p = strtok(NULL, " ");
		}
	}
	fclose(fp1);
	fclose(fp2);

	return 0;
}
