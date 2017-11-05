#include <stdio.h>

enum Menu { ADD, SUB, MULT, DIV};

int main()
{
	enum Menu m;

	int  type, num1, num2;
	char *t[] = { "ADD", "SUB", "MULT", "DIV" };


	printf("Define Menu enum and implement calculator with enum\n");
	printf(" %d. %s\n %d. %s\n %d. %s\n %d. %s\n", ADD, t[ADD], SUB, t[SUB], MULT, t[MULT], DIV, t[DIV]);

	printf("\ninput menu : ");
	scanf("%d", &type);
	printf("input two numbers : ");
	scanf("%d %d", &num1, &num2);


	switch (type)
	{
	case ADD:
		printf("%d + %d = %d\n", num1, num2, num1 + num2);
		break;
	case SUB:
		printf("%d - %d = %d\n", num1, num2, num1 - num2);
		break;
	case MULT:
		printf("%d * %d = %d\n", num1, num2, num1 * num2);
		break;
	case DIV:
		printf("%d / %d = %d\n", num1, num2, num1 / num2);
		break;
	default:
		printf("wrong input\n");
		break;
	}

	return 0;
}
