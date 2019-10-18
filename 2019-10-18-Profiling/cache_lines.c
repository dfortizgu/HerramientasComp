#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void ijk (int n, clock_t cputime1, clock_t cputime2){
  float ***a;
  a = malloc(n*sizeof(float **));
  for (int i=0; i<n; i++){
     a[i] = malloc(n*sizeof(float*));
    for (int j=0; j<n; j++)
      a[i][j] = malloc(n*sizeof(float));
   }
   
   cputime1 = clock();
   for (int k=0; k<n; ++k)
     for (int j=0; j<n; ++j)
      for (int i=0; i<n; ++i)
        a[i][j][k] = 1.0;
   cputime2=clock() - cputime1;
  printf("Time with fast index inside: %lf\n", ((double)cputime2)/CLOCKS_PER_SEC);
  
  for (int i=0; i<n; i++){
    for (int j=0; j<n; j++)
      free(a[i][j]);
    free(a[i]);
    }
  free(a);
}

void kji (int n, clock_t cputime1, clock_t cputime2){
  float ***a;
  a = malloc(n*sizeof(float **));
  for (int i=0; i<n; i++){
    a[i] = malloc(n*sizeof(float*));
    for (int j=0; j<n; j++)
      a[i][j] = malloc(n*sizeof(float));
  }

  cputime1 = clock();
  for(int i=0; i<n; ++i)
    for (int j=0; j<n; ++j)
      for (int k=0; k<n; ++k)
        a[i][j][k] = 2.3;
  cputime2=clock() - cputime1;
  printf("Time with fast index outside: %lf\n", ((double)cputime2)/CLOCKS_PER_SEC);

    for (int i=0; i<n; i++){
    for (int j=0; j<n; j++)
      free(a[i][j]);
    free(a[i]);
  }
  free(a);

}



int main(){
  const int n = 256;
  clock_t cputime1, cputime2;
  float ***a;
  int i,j,k;

  ijk(n,cputime1,cputime2);
  kji(n,cputime1,cputime2);

  return 0;
}
