#include <stdio.h>
#include <ctype.h>

int count_word(char *s);

int main()
{
	int wc = count_word("the c book...");

	printf("단어의 개수 : %d\n", wc);

	return 0;
}

int count_word(char *s)
{
	int i, wc = 0, waiting = 1;

	for (int i = 0; s[i] != NULL; i++)		// s의 각 글자 조사
	{
		if (isalpha(s[i]))					// s의 글자가 알파벳이면
		{
			if (waiting)					// 단어를 기다리고 있으면
			{
				wc++;						// 카운트를 증가
				waiting = 0;				// 단어를 처리하는 중
			}
		}
		else								// 알파벳이 아니면
		{
			waiting = 1;					// 단어를 기다린다
		}
	}

	return wc;
}
