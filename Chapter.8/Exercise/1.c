#include <stdio.h>

int f(int n);             // 함수 f()의 원형 정의


int main()
{
  f(10);                  // f()를 인수 10으로 출력

  return 0;
}

int f(int n)
{
  int i, result = 0;

  for(i = 0; i <=n; i++)
  {
    result += i;

    return result;        // 변수 result값을 반환
  }
}
