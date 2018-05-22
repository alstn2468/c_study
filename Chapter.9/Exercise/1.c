/*
3. 다음 프로그램의 출력을 쓰고, 이유를 설명하라.

  (a)                                   (b)
  #include <stdio.h>                    #include <stdio.h>

  void f(void);                         void f(int);

  int i;                                int n = 10;
  int main(void)                        int main(void)
  {                                     {
    for(i = 0; i < 3; i++)                  f(n);
        f();                                printf("n=%d\n", n);
    return 0;                               return 0;
  }                                     }
  void f(void)                          void f(int n)
  {                                     {
    for(i = 0; i < 5; i++)                  n = 20;
        printf("#");                    }
  }
  답 : ###############			    답 : 10
  함수에서 #이 5번 출력되고		   함수에서 바꾼 n의 값은
  함수 호출이 3번되어서			    그 함수 안에서만 생존해 있기 때문에
  #이 15개 출력된다.			       매개변수로 준 n의 값은 바뀌지 않고
					                 전역 변수로 지정되어있는 10의 값이 그대로 출력된다.

  (c)                                   (d)
  #include <stdio.h>                    #include <stdio.h>

  void f(void);                         void f(void);

  int x = 1;                            int main(void)
  int main(void)                        {
  {                                         f();
    int x = 2;                              f();
    {                                       return 0;
        int x = 3;                      }
        printf("%d\n", x);              void f(void)
    }                                   {
    printf("%d\n", x);                      static int count = 0;
    return 0;                               printf("%d\n", count++);
  }                                     }
  답 : 3				                   답 : 0
       2				                     1
  변수의 범위는 { } 중괄호이고		        원래 함수에서 사용된 변수는 함수가
  전역 변수로 선언된 변수가 아니라	     끝나면 사라지지만 static 키워드가 사용된
  지역 변수로 선언된 변수가 사용되기	    변수이기 때문에 함수가 종료되도 사라지지
  때문에 첫 번 째 출력은 중괄호안의	     않고 값이 유지되어 처음 0 출력이 끝난후
  x의 값인 3이 출력되고 두 번째 출력은     값이 1 증가한 것을 유지하고 있어 다음에
  main함수 scope에 선언된 x인 2가 출력된다.호출 하였을 때 1이란 값을 출력한다.

4. 다음 소스에 오류가 있는지를 먼저 판단하고 오류가 있다면 오류를 지적하라.
   논리적인 오류도 포함된다.

	(a)					       (b)
	#include <stdio.h>			int recursive(int n)
						        {
	register auto int x = 20;	     if(n == 1) return 0;
							         return n * recursive(n);
	int main(void)				}
	{
		printf(“%d\n”, x);
		return 0;
	}

	a) 하나 이상의 저장 유형 지정자를 붙이면 안 된다.
	b) 재귀 호출을 할 때 매개 변수의 값이 줄어들지 않아서 무한 호출 된다.

5. 다음 함수를 주석과 같이 호출하는 경우에 화면에 출력되는 내용과 함수의 반환값을 구하라.

	(a)
	// sum(5)로 호출				답 : 5
	int sum(int n)					    4
	{						            3
		printf(“%d\n”, n);			    2
		if(n < 1) return 1;			    1
		else return(n + sum(n –1));		0
	}						            반환 값 : 16

	(b)
	// recursive(5)로 호출					답 : 5
	int recursive(int n)					    4
	{							                3
		printf(“%d\n”, n);				        2
		if(n < 1) return 2;				        1
		else return (2 * recursive(n – 1) + 1); 0
	}							                반환 값 : 95

6. 다음의 순환적인 프로그램을 반복 구조를 사용한 비순환적 프로그램으로 바꿔라.

	int recursive(int n)
	{
		if(n == 0) return 1;
		else return (n + recursive(n-1));
	}

	답 :
	int fun(int n)
	{
		int i,sum  =  0;
		for(i = 1; i <= n; i++)
			sum += i;
		return sum;
	}
*/
