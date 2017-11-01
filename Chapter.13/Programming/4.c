#include <stdio.h>

struct complex
{
	double real;
	double imag;
};

struct complex complex_add(struct complex c1, struct complex c2);

int main()
{
	struct complex c1;
	struct complex c2;
	struct complex c3 = { 0 };

	printf("복소수 c1 = a + bi을 입력해 주세요(a, b) :  ");
	scanf("%lf %lf", &c1.real, &c1.imag);
	printf("복소수 c2 = a + bi을 입력해 주세요(a, b) : ");
	scanf("%lf %lf", &c2.real, &c2.imag);

	c3 = complex_add(c1, c2);

	printf("복소수의 합 = %f + %fi\n", c3.real, c3.imag);

	return 0;
}

struct complex complex_add(struct complex c1, struct complex c2)
{
	struct complex result = { 0 };

	result.real = c1.real + c2.real;
	result.imag = c1.imag + c2.imag;

	return result;
}
