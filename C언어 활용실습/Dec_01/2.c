#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	int max, min, i = 0;
	int num[10] = { 0 };

	if ((fp = fopen("numbers.txt", "r")) == NULL)
	{
		fprintf(stderr, "원본 파일을 열 수 없습니다.\n");
		exit(1);
	}

	printf("파일의 숫자들 중 가장 큰 값과 작은 값 계산\n");

	while (!feof(fp))
	{
		fscanf(fp, "%d", &num[i]);
		if (i == 0)
		{
			max = num[i];
			min = num[i];
		}
		if (max < num[i])
		{
			max = num[i];
		}
		if (min > num[i])
		{
			min = num[i];
		}
		i++;
	}

	printf("가장 큰 값 : %d\n", max);
	printf("가장 작은 값 : %d\n", min);

	fclose(fp);

	return 0;
}
