#include <stdio.h>

int main()
{
	int num1, num2, cal, result;
	int *p, *q, *t, *v;

	t = &cal;
	p = &num1;
	q = &num2;
	v = &result;

	printf("1. add, 2. minus, 3. multiple, 4.divide, 5.quit\n");
	printf("input menu : ");
	scanf("%d", &cal);

	switch (*t)
	{
	case 1:
		printf("input two number : ");
		scanf("%d %d", p, q);
		*v = *p + *q;
		printf("result is %d\n", *v);
		break;
	case 2:
		printf("input two number : ");
		scanf("%d %d", p, q);
		*v = *p - *q;
		printf("result is %d\n", *v);
		break;
	case 3:
		printf("input two number : ");
		scanf("%d %d", p, q);
		*v = *p * *q;
		printf("result is %d\n", *v);
		break;
	case 4:
		printf("input two number : ");
		scanf("%d %d", p, q);
		printf("result is %f\n", (double)*p / *q);
		break;
	case 5:
		break;
	default:
    printf("invalid input\n");
		break;
	}
	return 0;
}
