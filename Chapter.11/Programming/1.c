#include <stdio.h>

int main()
{
  int x = 0x12345678;
  // x의 주소값을 char *로 변환하여 xp에 넣기
  unsigned char *xp = (char *)&x;
  // x는 int형이기 때문에 x의 주소값 &x를 char *에 넣으려면 형변환 필요
  printf("바이트순서 : %x %x %x %x\n", xp[0], xp[1], xp[2], xp[3]);
  // 각 바이트 출력
  return 0;
}
