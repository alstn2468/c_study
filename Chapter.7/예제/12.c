// 반복문을 이용한 정수합 프로그램
#include <stdio.h>

int main()
{
  int i, sum;

  sum = 0;

  for(i = 1; i <= 10; i++)    // i는 1부터 10까지 증가
    sum += i;                 // sum = sum + i;와 같음

  printf("1부터 10까지의 정수의 합 = %d\n", sum);

  return 0;
}
