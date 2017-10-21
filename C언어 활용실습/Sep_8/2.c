#include <stdio.h>

int main()
{
  int x, y, z;

  for(x = 1; x < 10; x++)
  {
    for(y = 1; y < 10; y++)
    {
      if(x >= y)
      {
      z = x * y;
      printf("%d * %d = %d\n", x,y,z);
      }
    }
    printf("\n");
  }
  return 0;
}
