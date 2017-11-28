#include <stdio.h>
#define SIZE 100

int main()
{
	int buffer[SIZE];
	FILE *fp1 = NULL;
	FILE *fp2 = NULL;
	int count;
	char file1[SIZE], file2[SIZE];

	printf("원본 파일 이름 : ");
	scanf("%s", file1);

	printf("복사 할 파일 이름 : ");
	scanf("%s", file2);

	fp1 = fopen(file1, "rb");
	fp2 = fopen(file2, "wb");

	if (fp1 == NULL)
	{
		fprintf(stderr, "파일 %s를 열 수 없습니다.\n", file1);
		return 1;
	}
	if (fp2 == NULL)
	{
		fprintf(stderr, "파일 %s를 열 수 없습니다.\n", file2);
		return 1;
	}

	while ((count = fread(buffer, sizeof(char), SIZE, fp1)) != NULL)
	{
		fwrite(buffer, sizeof(char), count, fp2);
	}

	fclose(fp1);
	fclose(fp2);

	return 0;
}
