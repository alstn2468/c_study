/*
1. 다음에서 인덱스에 의한 배열원소 참조는 포인터에 의한 참조로 바꾸고 반대로 포인터에의한 참조는 인덱스에 의한 참조로 바꿔라 (a)번은 예이다.
	a) list[6] > *(list+6)		b) name[3] > *(name+3)
	c) *(cost+6) > cost[6]		d) message[0] > *(message+0)


2. 다음 코드의 빈칸에 주석에 알맞은 문장을 넣어라.

	char code;
	char *p;	// char형 포인터변수 p선언
	*p = &code;	//포인터에 변수 code의 주소대입
	*p = ‘a’;	//포인터를 통하여 변수 code에 ‘a‘ 대입하기


3. int a[] = {10, 20, 30, 40, 50} 으로 정의되었다고 가정하자. *(a+2)의 실행 값은?

	답 : 30


4. 아래 문장이 실행되었다고 가정하자. 다음 중 다른 문장들과 실행결과가 다른 것은?

	int i;
	int *p = &i;

     1) i = i + 1;      2) i++;       3) *p++;      4) *p = *p + 1;

      답 :  3


5. 다음 프로그램의 출력은?

	int x = 6;
	int *p = &x;
	printf(“%d\n”, --(*p));                            답 ; 5
	printf(“%d\n”, (*p)++);				     : 5





6. 다음 프로그램의 출력은?

	int *p = (int *)1000;
	double *q = (double *)2000;
	printf(“%d\n”, p+2);
	printf(“%d\n”, q+1);

	답 : 1008
	   : 2008

7. 다음 프로그램의 출력은?

	int list[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int *p;
	p = list;
	printf(“%d\n”, *list);
	pritnf(“%d\n”, *p + 1);
	printf(“%d\n”, *(p + 1));

	답 : 0
	   ; 1
	   : 1

8. double형 배열을 매개변수로 전달받는 함수 print_array()의 헤더를 다음과 같은 방법으로   작성하여라. 반환값은 없다.

	a) b를 배열로 선언
	  > void print_array(double a[])
	b) b를 포인터로 선언
	  > void print_array(double *a)










9. 다음 프로그램에서 ip의 값의 변경되지 않는 이유는 무엇인가?

	void f(int *p)
	{
		static int data = 5;
		p = &data;
	}
	int main(void)
	{
		int *ip = NULL;
		f(ip);
	}

	답 : ip의 값이 전달되었기 때문에 ip를 변경할 수 없다. 값을 변경하려면 주소값을	    전달하여야 한다.
