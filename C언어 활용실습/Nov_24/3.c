#include <stdio.h>

int main()
{
	FILE *fp1, *fp2;
	int c = 0;

	fp1 = fopen("file1.txt", "r");
	fp2 = fopen("file2.txt", "w");

	while ((c = fgetc(fp1)) != EOF)
	{
		fputc(c, fp2);
	}

	fclose(fp1);
	fclose(fp2);

	return 0;
}
