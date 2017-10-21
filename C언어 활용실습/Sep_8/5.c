#include <stdio.h>

int sum(int num)
{
  static int acc;
  return acc += num;
}

int main()
{
  int value1, value2, sumValue = 0;

  value1 = 0;
  value2 = 2;
  sumValue = sum(value2);
  printf("%d + %d = %d\n", value1, value2, sumValue);
  value1 = sumValue;
  value2 = 4;
  sumValue = sum(value2);
  printf("%d + %d = %d\n", value1, value2, sumValue);
  value1 = sumValue;
  value2 = 8;
  sumValue = sum(value2);
  printf("%d + %d = %d\n", value1, value2, sumValue);
  value1 = sumValue;
  value2 = 16;
  sumValue = sum(value2);
  printf("%d + %d = %d\n", value1, value2, sumValue);
  value1 = sumValue;
  value2 = 32;
  sumValue = sum(value2);
  printf("%d + %d = %d\n", value1, value2, sumValue);

  return 0;
}
