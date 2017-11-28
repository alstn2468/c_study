#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char fname[100];
	unsigned char buffer[16];
	int address = 0;
	int i, bytes;

	printf("원본 파일 이름 : ");
	scanf("%s", fname);

	if ((fp = fopen(fname, "rb")) == NULL)
	{
		fprintf(stderr, "원본 파일 %s를 열 수 없습니다.\n", fname);
		exit(1);
	}

	while (1)
	{
		bytes = fread(buffer, 1, 16, fp);

		if (bytes <= 0)
		{
			break;
		}
		printf("%08X : ", address);

		for (i = 0; i < bytes; i++)
		{
			printf("%02X ", buffer[i]);
		}

		for (i = 0; i < bytes; i++)
		{
			if (isprint(buffer[i]))
			{
				putchar(buffer[i]);
			}
			else
			{
				puthchar('.');
			}
		}
		address += bytes;
		putchar('\n');
	}

	fclose(fp);

	return 0;
}
