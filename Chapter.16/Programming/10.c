#include <stdio.h>

int main()
{
	FILE *fp = NULL;
	char buffer[500];
	char file[100];
	int line_number = 1;

	printf("파일 이름을 입력하시오 : ");
	scanf("%s", file);

	if ((fp = fopen(file, "r")) == NULL)
	{
		printf("파일 열기 실패");
		return 0;
	}

	while (fgets(buffer, 500, fp) != NULL)
	{
		printf("%d : %s", line_number, buffer);
		line_number++;
	}
	printf("\n");

	return 0;
}
