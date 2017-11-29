#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *fp = NULL;
	char file[100];
	char line[100];

	printf("파일 이름을 입력하세요 : ");
	scanf("%s", file);
	getchar();


	if ((fp = fopen(file, "w")) == NULL)
	{
		fprintf(stderr, "파일 %s를 열 수 없습니다.\n", file);
		exit(1);
	}
	while (1)
	{
		char *p = fgets(line, 100, stdin);
		if (strcmp(p, "\n") == 0)
		{
			break;
		}
		fputs(line, fp);
	}
	fclose(fp);

	return 0;
}
