/*
1. 다음의 설명에 부합하느 ㄴ함수르 아래 박스에서 선택하여 빈칸에 적어라.

  strcmp(), strtok(), strcat(), strcpy(), strlen(), sprintf(), gets()

  a) strcat() : 함수는 하나의 문자열의 끝에서 다른 문자열을 연결한다.
  b) strcpy() : 함수는 문자열을 복사한다.
  c) strtok() : 함수는 문자열에서 토큰을 찾는다.
  d) gets()   : 함수는 표준 입력에서 하나의 문자열을 읽는다.
  e) strlen() : 함수는 문자열을 이루는 문자의 개수를 반환한다.

2. 다음의 문장의 오류 여부를 말하고 오류가 있는 경우, 그 이유를 써라.

    a) strcat(s, '?');   >> strcat(s, "?");
    b) if( s != "value") >> if(strcmp(s, "value"))
    c) char a[20];
      a = "Hello World";    >> strcpy(a,"Hello World");

3. 다음의 문장이 제대로 동작하지 않는 이유는 무엇인가? 어떻게 수정하여야 하는가?

    char *s1 = "Hi! ";          >> char s1[20] = "Hi! ";
    char *s2 = "programmers";
    char *s3 = strcat(s1, s2);   >> strcat(s1, s2);

4. 다음 두 문장의 차이점을 설명하라.

    char a[] = "Hello World!";
    char *p = "Hello World!";

    답 : 첫번째 문장에서는 문자 배열이 선언되고 문자 배열의 초기값이 "Hello World!"가 된다.
         두번째 문장에서는 읽기 전용 메모리에 문자열 상수가 저장되고 이 문자열 상수의 주소가 포인터 p에 대입된다.

5. 두개의 문자열이 일치하는 지를 검사하는 문장을 올바르게 작성한 것은?

    1) if(s1 == "Hello")
    2) if(strcmp(s1, "Hello"))
    3) if(strcmp(s1, "Hello") < 0)
    4) if(strcmp(s1, "Hello") == 0)

    답 : 4

6. 다음 프로그램에 오류가 있는지를 말하고 있다면 수정하라.

    int main()
    {
      char *p;        >> char p[100];
      scanf("%s", p);
    }

7. 다음의 변수들에게 몇 바이트의 메모리가 할당되는가?

    a) char str[] = "abc";                    >> 4byte
    b) char *pc = "abc";                      >> 4byte
    c) char str[10] = "abc";                  >> 10byte
    d) char str[2][10] = { "abc", "def" };    >> 20byte

8. 다음과 같이 정의되어 있다고 가정하고 다음의 수식의 값을 말하라.

    char s[][10] = { "HIGH", "MIDDLE", "LOW" };

    a) s[0]       >> "HIGH"
    b) s[1][3]    >> 'D'
    c) *s         >> "HIGH"

9. 다음의 코드의 실행 결과를 써라.

    char *p;
    char s[] = "Hello";

    p = s + strlen(s) - 1;

    while(p >= s)
    {
      printf("%s \n", p);
      p--;
    }

    답 : o
         lo
         llo
         ello
         Hello

10. 다음의 함수가 하는 작업은 무엇인가? 구체적으로 mystery("abc", "abd") 와 같이 호출하면 어떤 값이 반환 되는가?

    int mystery(const char *s1, const char *s2)
    {
      while(*s1 == *s2)
      {
        if(*s1 == 0)
        {
          return 0;
        }
        s1++;
        s2++;
      }
      return 1;
    }

    답 : mystery()는 s1과 s2의 값이 같으면 0을 반환하고 다르면 1을 반환한다.
         mystery("abc", "abd")와 같이 호출하면 1을 반환한다.
*/
