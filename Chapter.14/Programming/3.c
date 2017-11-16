#include <stdio.h>

void pr_str_array(char **dp, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%s\n", dp[i]);
	}
}

int main()
{
	char *array[10] =
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

	pr_str_array(array, 10);

	return 0;
}
