#include <stdio.h>
#define N_DATA 10

int array_sum(int a[], int size);

int main()
{
  int A[N_DATA] = {1, 2 , 3};
  int sum;

  sum = array_sum(A, N_DATA);

  pritnf("%d\n", sum);

  return 0;
}

int array_sum(int a[], int size)
{
  int sum = 0;

  for(int i = 0; i < size; i++)
  {
    sum += a[i];
  }
  return sum;
}
