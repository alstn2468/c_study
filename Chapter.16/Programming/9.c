#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	FILE *fp1, *fp2, *fp3;
	char file1[100], file2[100], file3[100];
	char buffer[100];

	if (argc >= 4)
	{
		strcpy(file1, argv[1]);
		strcpy(file2, argv[2]);
		strcpy(file3, argv[3]);
	}
	else
	{
		printf("인수가 부족합니다.\n");
		return 0;
	}

	if ((fp1 = fopen(file1, "r")) == NULL)
	{
		fprintf(stderr, "원본 파일 %s를 열 수 없습니다.\n", file1);
		exit(1);
	}

	if ((fp2 = fopen(file2, "r")) == NULL)
	{
		fprintf(stderr, "원본 파일 %s를 열 수 없습니다.\n", file2);
		exit(1);
	}

	if ((fp3 = fopen(file3, "w")) == NULL)
	{
		fprintf(stderr, "결과 파일 %s를 열 수 없습니다.\n", file3);
		exit(1);
	}

	while (fgets(buffer, 100, fp1) != NULL)
	{
		fputs(buffer, fp3);
	}

	while (fgets(buffer, 100, fp2) != NULL)
	{
		fputs(buffer, fp3);
	}

	fclose(fp1);
	fclose(fp2);
	fclose(fp3);

	return 0;
}
