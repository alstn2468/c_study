#include <stdio.h>

struct vector
{
	double x;
	double y;
};

struct vector vector_add(struct vector v1, struct vector v2);

int main()
{
	struct vector v1;
	struct vector v2;
	struct vector v3 = { 0 };

	printf("v1벡터의 값을 입력해 주세요(x, y) : ");
	scanf("%lf %lf", &v1.x, &v1.y);
	printf("v2벡터의 값을 입력해 주세요(x, y) : ");
	scanf("%lf %lf", &v2.x, &v2.y);

	v3 = vector_add(v1, v2);

	printf("합벡터는 (%f, %f)입니다.\n", v3.x, v3.y);

	return 0;
}

struct vector vector_add(struct vector v1, struct vector v2)
{
	struct vector result = { 0 };

	result.x = v1.x + v2.x;
	result.y = v1.y + v2.y;

	return result;
}
