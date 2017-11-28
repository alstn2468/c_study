#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *fp1, *fp2;
	char file1[100], file2[100];
	char buffer1[100], buffer2[100];

	printf("첫번째 파일 이름 : ");
	scanf("%s", file1);

	printf("두번째 파일 이름 : ");
	scanf("%s", file2);

	if ((fp1 = fopen(file1, "r")) == NULL)
	{
		fprintf(stderr, "원본파일 %s를 열 수 없습니다.\n", file1);
		exit(1);
	}
	if ((fp2 = fopen(file2, "r")) == NULL)
	{
		fprintf(stderr, "원본파일 %s를 열 수 없습니다.\n", file2);
		exit(1);
	}

	while (1)
	{
		fgets(buffer1, 100, fp1);
		fgets(buffer2, 100, fp2);

		if (buffer1 == NULL || buffer2 == NULL)
		{
			break;
		}
		if (strcmp(buffer1, buffer2) != 0)
		{
			printf("<< ");
			fputs(buffer1, stdout);
			printf("\n");
			printf(">> ");
			fputs(buffer2, stdout);
			printf("\n");
			break;
		}
		else
		{
			printf("두 파일은 서로 일치함\n");
			break;
		}
	}

	fclose(fp1);
	fclose(fp2);

	return 0;
}
