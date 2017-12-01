#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	int sum = 0;
	int num;

	if ((fp = fopen("numbers.txt", "r")) == NULL)
	{
		fprintf(stderr, "원본 파일을 열 수 없습니다.\n");
		exit(1);
	}

	printf("파일의 숫자 총합을 계산\n");

	while (!feof(fp))
	{
		fscanf(fp, "%d", &num);
		sum += num;
	}

	printf("총합 = %d\n", sum);

	fclose(fp);

	return 0;
}
