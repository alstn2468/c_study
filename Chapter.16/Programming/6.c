#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	FILE *fp = NULL;
	int c, count = 0;
	char file1[100];

	printf("파일 이름을 입력하세요 : ");
	scanf("%s", file1);

	if ((fp = fopen(file1, "r")) == NULL)
	{
		fprintf(stderr, "파일 %s를 열 수 없습니다.\n", file1);
		exit(1);
	}
	while ((c = getc(fp)) != EOF)
	{
		if (isprint(c))
		{
			count++;
		}
	}
	fclose(fp);

	printf("출력 가능한 문자의 개수는 %d개 입니다.\n", count);

	return 0;
}
