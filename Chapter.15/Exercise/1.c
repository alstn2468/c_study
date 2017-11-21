/*
1. 다음 문장의 의미를 설명하라.

  #if VERSON == 1
    printf("원의 면적읜 %f입니다.\n", area(radius));
    // 단순 매크로 VERSON이 1 이면
  #elif VERson == 2
    printf("area of the circle is %f \n", area(radius));
    // 단순 매크로 VERSON이 2이면
  #else
    printf("area of the circle is %f \n", area(radius));
    // 단순 매크로 VERSON이 1이나 2가 아니면
  #endif

  2. #define을 이용하여서 단순 매크로 SIZE를 10으로 올바르게 정의한 것을 모두 골라라.

      1) #define SIZE = 10    2) #define SIZE(x) 10    3) #define SIZE == 10   4) #deinfe SIZE 10

      답 : 4

  3. 다음의 문장에 오류가 있다면 그 이유를 적어라.

      1) #define SQUARE(x, y) ((x) * (x))
        > 함수 매크로의 매개변수 y를 사용하지 않았다.
      2) #ifdef VERSON == 1
        > #if VERSON == 1으로 바꾸어야 한다. 또는 #ifdef VERSON으로 바꾸어야 한다.
      3) #if (DEBUG > 3.00)
        > #if (DEBUG > 3)으로 바꾸어야 한다. 단순 매크로의 비교 대상은 정수
      4) #undef DEBUG
        > 오류 없음
      5) #define SIZE = 100
        > #define SIZE 100으로 바꾸어야한다.
      6) #if (VERSON * 100 > 300 && DATE > 080901)
        > #if (VERSON * 100 > 300 && DATE > 80901)으로 바꾸어야함 정수앞에 0이 붙으면 오류
      7) #if (LEVEL == "BASIC")
        > 문자열과는 비교할 수 없다.

  4. #include <header>와 #include "header"의 차이점은 무엇인가?

      #include<header>은 컴파일러가 설치된 디렉토리에서 헤더파일을 찾는디
      #include"header"은 현재 디렉토리에서 헤더파일을 찾는다.

  5. 다음 프로그램에서 논리적으로 잘못된 부분을 찾아서 올바르게 수정하여라.

      #define AREA(x, y) x * y        >> #define AREA(x, y) ((x) * (y))

      int main()
      {
        int x = 10;
        printf("%d\n", AREA(x + 1, 10));
        return 0;
      }

  6. 다음 프로그램의 결과를 예측하라.

      #define DEBUG 0
      int main()
      {
      #ifdef DEBUG
        printf("DEBUG 버전\n");
      #else
        printf("정식 버전\n");
      #endif
        return 0;
      }

      답 : DEBUG 버전

  7. 다음 프로그램이 출력하는 것은 무엇인가?

    a   #include <stdio.h>
        #define COMBINE(a,b) a ## b
        int main()
        {
          printf(COMBINE("first", "second"));
          return 0;
        }

        답 : firstsecond

    b   #include <stdio.h>
        #deinfe HELLO(x,y) \
            printf(#x " and " #y "Hello\n");

        int main()
        {
          HELLO(Kim, Park);
          return 0;
        }

        답 : Kim and Park Hello

  8. 다음의 소스에서 오류가 있는지 살펴보고 만약 오류가 있다면 올바르게 수정하여라. 논리적인 오류도 포함한다.

    a   #define DEBUG
        #ifdef !DEBUG
        ...
        #endif

        답 : #ifdef !DEBUG를 #ifndef DEBUG로 바꾸어준다.

    b   #define PRINT(x) printf("%d", x);
        int main()
        {
          PRINT(x);
          return 0;
        }

        답 : 변수 x 선언을 해줘야한다 int x = 0; 선언

  9. 다음의 설명에 부합하는 문장을 작성하라

    a) 1비트 크기의 비트 필드 8개를 선언한다. 비트필드의 이름은 bit1에서 bit8로 한다.

      struct bit_field
      {
        unsigned bit1 : 1;
        unsigned bit2 : 1;
        unsigned bit3 : 1;
        unsigned bit4 : 1;
        unsigned bit5 : 1;
        unsigned bit6 : 1;
        unsigned bit7 : 1;
        unsigned bit8 : 1;
      };

    b) bit1에 1을 대입한다.

      struct bit_field x;

      x.bit1 = 1;
*/
