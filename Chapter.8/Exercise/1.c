/*
1. 함수에 대한 설명 중 잘못된 것은?

	1) 함수를 정의하기 전에 반드시 함수 원형 정의가 있어야 한다.
	2) 함수의 매개 변수는 전혀 없을 수도 있다.
	3) 함수는 값을 반환하지 않을 수도 있다.
	4) 함수 안에 문장이 하나도 없을 수도 있다.
	답 : (1)
2. 다음 함수 원형 정의 중에서 int형을 반환하는 함수는?

	1) void func(int);
	2) double func(int, int);
	3) int func(double x);
	4) void func(void);
	답 : (3)
3. 다음의 함수 원형 정의 중에서 잘못된 것은?

	1) int func(int x, y);
	2) void func(x, y);
	3) char func(double);
	4) void func(void, void);
	답 : (1), (2), (4)
4. int func(int);의 원형을 가지는 함수의 호출로 옳은 것은?

	1) func(10);
	2) int func(10);
	3) func(int);
	4) func();
	답 : (1)
5. 다음 라이브러리 함수 호출의 반환 값을 써라.

	a) fabs(-1.72)	답 : 1.720000
	b) floor(1.72)	답 : 1.000000
	c) ceil(1.72)	답 : 2.000000


6. 다음 수식의 반환 값의 범위를 써라.

	a) rand()%10		답 : 0 ~ 9
	b) rand()%5 + 2		답 : 2 ~ 6

7. 다음의 수학식을 C언어에서 계산하려면 어떤 문장으로 변환하여야
   하는가?

	a)
	답 : y = log10(x) + exp(x);
	b)
	답 : y = sin(x) + sqrt(x * x – 2.0 * a) + pow(2.0, 10);

8. 다음과 같은 기술에 부합하는 함수 원형을 작성하라.

	a) int형 매개 변수 n을 받아서 아무것도 반환하지 않는
	   print_error() 함수
	답 : void print_error(int n);
	b) double형 매개 변수 x, y를 받아서 double형을 반환하는
	  larger_of() 함수
	답 : double larger_of(double x, double y);
	c) 어떠한 매개 변수도 갖지 않고 아무것도 반환하지 않는
	   side_effect() 함수
	답 : void side_effect(void);

9. (가)의 함수 원형 정의에 적합한 return 문을 (나)에서 찾아서
   서로 연결하라.

		가				나
	* int f(void);			* return;
	* void g(int, int);		* return 1.0;
	* double h(double, int);	* return 10 + 20;

	int f(void); -> return 10 + 20;
	void g(int, int); -> return;
	double h(double, int); -> return 1.0;

10. 다음은 1부터 10까지의 합을 계산하는 프로그램이다.
    프로그램의 빈칸을 채워라.

	#include <stdio.h>

	int f(int n);	// 함수 f()의 원형 정의

	int main(void)
	{
		f(10);		// f()를 인수 10으로 호출
		return 0;
	}

	int f(int n)
	{
		int i, result = 0;
		for(i = 0; i <= n; i++)
			result += i;

		return result;	// 변수 result의 값을 반환
	}

11. 함수 원형의 정의가 올바른지를 결정하고 만약 잘못된 점이
    있다면 이유를 설명하고 바르게 수정하라.

	a) double f(double x, y);
	답 : double f(double x, double y);
	매개변수가 2개인데 하나는 타입을 적지 않았다.
	b) (int) f(double x, double y);
	답 : int f(double x, double y);
	함수의 반환 값의 타입을 적는 곳이 불필요한 괄호를 사용했다.
	c) int f((int)x, (int)y);
	답 : int f(int x, int y);
	함수의 매개 변수의 타입을 적는 곳에 불필요한 괄호를 사용했다.
	d) float get_area(radius, pi);
	답 : float get_area(double radius, double pi);
	함수의 매개 변수의 타입을 명시하지 않았다.


12. 다음 프로그램에서 붉은색으로 표시된 부분을 함수로 작성하여
    프로그램을 수정하라. 함수는 인수와 반환 값을 갖도록 설계하라.

	#include <stdio.h>

	int get_sum(int n)
	{
		int i, sum = 0;
		for(i = 0; I <=n; I++)
			sum += i;
		return sum;
	}
	int main(void)
	{
		int i, n, sum = 0;

		printf(“정수를 입력하시오 : ”);
		scanf(“%d”, &n);
		for(i = 0; i <= n; i++)
			sum += i;
		printf(“0부터 %d까지의 합은 %d입니다.\n”, n, sum);
		printf(“0부터 %d까지의 합은 %d입니다.\n”, n, get_sum(n));
		return 0;
	}

13. 다음 코드에서 잘못된 곳(컴파일 오류 및 경고)를 지적하라. 논리적 오류도 지적하라.

	a)
	int half_of(int x);
	{
		return x / 2;
	}
	int half_of(int x); -> int half_of(int x)
	함수의 원형을 작성한 것이 아니라 함수자체를 구현 하였는데 ;이 붙여있다.

	b)
	void print_message(void);
	int main(void)
	{
		print_message(3);
	}
	print_message(3) -> print_message();
	함수의 매개변수의 개수와 호출시의 매개변수의 개수가 다르다.

	c)
	double half_of(int);
	int main(void)
	{
		printf(“%f”, half_of(10.0));
		return 0;
	}
	double half_of(double x)
	{
		return x / 2.0;
	}
	double half_of(int); -> double half_of(double);
	함수의 원형과 함수 정의의 매개변수의 타입이 다르다.

	d)
	int sum(int x, int y)
	{
		sum = x + y;
	}
	sum = x + y; -> return sum = x + y;
	아무런 값도 반환해 주지 않았다.

	e)
	void sum(void)
	{
		int x = 1, y = 2, z = 3;
		return x + y + z;
	}
	void sum(void) -> int sum(void)
	반환 값이 정의되어 있지 않았는데 반환 값이 있다.

*/
