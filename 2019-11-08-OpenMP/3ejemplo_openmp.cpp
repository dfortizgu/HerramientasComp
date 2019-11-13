#include <omp.h>
#include <stdio.h>
#include <cmath>
#include <time.h>

int main(int argc, char *argv[]) {
  const int N = 30000000;
  int i;
  double *a;
  a = new double[N];
  double suma = 0.0;

#pragma omp parallel for   //Se indica que se paralelize el for
   
     for(i = 0; i < N; i++)
       {
	a[i] = 2*std::sin(i)*std::cos(i)/3.98;
      }
   
#pragma omp parallel for reduction(+:suma)
       for(i=0; i < N; i++)
	 {
	   suma+=a[i];
	 }
     
  
       
  printf("%.16e\n", suma/N);
  
  delete [] a;
  return 0;
}
