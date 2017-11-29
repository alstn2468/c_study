#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	FILE *fp1 = NULL;
	FILE *fp2 = NULL;
	int value;

	if ((fp1 = fopen("sample.txt", "w")) == NULL)
	{
		printf("파일 열기 실패\n");
		return 0;
	}
	if ((fp2 = fopen("sample2.bin", "wb")) == NULL)
	{
		printf("파일 열기 실패\n");
		return 0;
	}

	srand((unsigned)time(NULL));

	for (int i = 0; i < 100; i++)
	{
		value = rand();
		fprintf(fp1, "%d", value);
		fwrite(&value, sizeof(int), 1, fp2);
	}

	fclose(fp1);
	fclose(fp2);

	return 0;
}
