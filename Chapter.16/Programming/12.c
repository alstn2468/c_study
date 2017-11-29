#include <stdio.h>
#include <string.h>

int main()
{
	FILE *fp = NULL;
	char name[100];
	char word[100];
	char buffer[1000];
	int count = 0;

	printf("파일 이름 : ");
	scanf("%s", name);
	printf("찾을 단어 : ");
	scanf("%s", word);

	if ((fp = fopen(name, "r")) == NULL)
	{
		printf("파일 열기 실패\n");
		return 0;
	}

	while (fgets(buffer, 1000, fp) != NULL)
	{
		count++;
		if (strstr(buffer, word) != NULL)
		{
			printf("%s : Line %d >> %s\n", name, count, buffer);
		}
	}
	fclose(fp);

	return 0;
}
