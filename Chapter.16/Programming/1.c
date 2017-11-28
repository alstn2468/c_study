#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	FILE *fp1, *fp2;
	char file1[100], file2[100];
	char buffer1[256], buffer2[256];
	char *result1, *result2;

	printf("첫번째 파일 이름 : ");
	scanf("%s", file1);

	printf("두번째 파일 이름 : ");
	scanf("%s", file2);

	if ((fp1 = fopen(file1, "r")) == NULL)
	{
		fprintf(stderr, "파일 %s를 열 수 없습니다.\n", file1);
		exit(1);
	}

	if ((fp2 = fopen(file2, "r")) == NULL)
	{
		fprintf(stderr, "파일 %s를 열 수 없습니다.\n", file2);
		exit(1);
	}

	while (1)
	{
		result1 = fgets(buffer1, 256, fp1);
		result2 = fgets(buffer2, 256, fp2);

		if (strcmp(buffer1, buffer2) != 0)
		{
			printf("두 파일은 서로 다릅니다.\n");
			break;
		}
		if (result1 == NULL && result2 == NULL)
		{
			printf("두 파일은 서로 같습니다.\n");
			break;
		}
		else if (result1 == NULL || result2 == NULL)
		{
			printf("두 파일은 서로 다릅니다.\n");
			break;
		}
	}

	fclose(fp1);
	fclose(fp2);

	return 0;
}
