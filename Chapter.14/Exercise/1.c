/*
1. 다음은 무엇을 선언하는 문장인가?

    a) int **dp;
	int형 이중포인터 변수 dp선언
    b) int **pa[10];
	int형 포인터 배열 pa 선언
    c) int (*p)[3];
	int형 배열 포인터 p 선언
    d) void (*f)(int a);
	int형 매개 변수를 가지고 void형 함수를 가리키는 포인터 f선언

2. 다음의 설명에 맞는 문장을 작성하라.

    a) int형 포인터에 대한 포인터
	int **dp;
    b) 5개의 double형 포인터를 저장하는 배열의 선언
	double *pa[5];
    c) char형 인수를 받으며 double형을 반환하는 함수에 대한 포인터
	double (*pf)(char);
    d) 2개의 short형 인수를 받으며 int 형을 반환하는 함수에 대한 포인터의 배열
	int (*pf[10])(short, short);
    e) 아무것도 가리키지 않는 포인터 p
	void *p;

3. 다음 프로그램의 출력을 써라

    a)
	int i = 80;
    	int *p = &i;
	int **dp = &p;

	**dp = 90;
	*p = 100;

	printf(“%d %d %d”, I, *p, **dp);


	답 : 100 100 100


    b)
	int main()
	{
	    int m[3][2] = { 1, 2, 3, 4, 5, 6 };

	    printf(“%d\n”, **m);
	    printf(“%d\n”, *m[1]);
	}

    답 :	1
	3


    c)
	char *a[] = { “서울”, “부산”, “인천”, “대구”};
	char **x;
	x = a;

	printf(“%s\n”, *x);

    답 : 서울

    d)
	int a[2][3] = {
		{ 1, 2, 3}.
		{ 4, 5, 6}
	};
	int (*p)[3] = a;
	printf(“%d”, p[0][1]);

    답 : 2
