#include <cstdio>

int main (void)
{
#pragma omp parallel
  {
    printf("Hola mundo\n");
  }
  return 0;
}
