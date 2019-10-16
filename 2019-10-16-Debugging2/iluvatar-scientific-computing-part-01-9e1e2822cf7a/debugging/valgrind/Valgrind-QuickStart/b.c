#include <stdio.h>

int main()
{
  int x = 1;
  printf ("x = %d\n", x);


  int i, j = 0;
  int a[10]={0};// b[10];
  for ( i = 0; i < 10; i++ ) {
    j += a[i];
  }
  if ( j == 77 ) 
    printf("hello there\n");

  return 0;
}
