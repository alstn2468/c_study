#include <stdio.h>
#include <string.h>

void sort_things(char *s[], int size);

int main()
{
	char *s[3] = { "mycopy","src","dst" };

	printf("정렬 전 배열 : %s %s %s\n", s[0], s[1], s[2]);

	sort_things(s, 3);

	printf("정렬 후 배열 : %s %s %s\n", s[0], s[1], s[2]);

	return 0;
}

void sort_things(char *s[], int size)
{
	int least = 0;
	char *temp;

	for (int i = 0; i < (size - 1); i++)
	{
		least = i;

		for (int j = i + 1; j < size; j++)
		{
			if (strcmp(s[j], s[least]) < 0)
			{
				least = j;
			}
		}

		temp = s[i];
		s[i] = s[least];
		s[least] = temp;
	}
}
