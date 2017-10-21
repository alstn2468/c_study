#include <stdio.h>
#define SIZE  10

void merge( int* A, int* B, int* C )
{
  int a=0, b=0, c=0;
  while( a < SIZE && b < SIZE )
  {
    if( A[a] < B[b] )
    C[c++] = A[a++];
    else
    C[c++] = B[b++];
  }
  while( a < SIZE )
    C[c++] = A[a++];
  while( b < SIZE )
    C[c++] = B[b++];
}

void main()
{
  int i;
  int A[SIZE] = { 2,5,8,5,3,2,3,4,8,9 };
  int B[SIZE] = { 1,7,3,4,7,3,7,9,1,8 };
  int C[SIZE*2] = {0,};

  printf("A = ");
  for( i=0; i<SIZE; i++ )
    printf("%d ", A[i]);
    printf("\nB = ");
  for( i=0; i<SIZE; i++ )
    printf("%d ", B[i]);
    printf("\nC = ");
    merge( A, B, C );
  for( i=0; i<SIZE*2; i++ )
    printf("%d ", C[i]);
    printf("\n");
}
