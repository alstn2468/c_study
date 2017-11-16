#include <stdio.h>

void set_proverb(char **q, int n);

int main()
{
	char *s = NULL;
	int n;

	printf("몇번째 속담을 선택하시겠습니까?(0 ~ 8) : ");
	scanf("%d", &n);
	if (n >= 0 && n <= 8)
	{
		set_proverb(&s, n);

		printf("선택된 속담 = %s\n", s);
	}
	else
	{
		printf("잘못된 숫자를 입력했습니다.\n");
	}

	return 0;
}

void set_proverb(char **q, int n)
{
	static char *array[10] =
	{
		"A bad shearer never had a good sickle.",
		"A bad workman always blames his tools.",
		"A bad workman quarrels with his tools.",
		"A bad thing never dies.",
		"A bad workman finds fault with his tools.",
		"A bad work man always blames his tools.",
		"A bargain is a bargain.",
		"A barking dog never bites.",
		"A barking dogs was never a good hunter."
	};

	*q = array[n];
}
