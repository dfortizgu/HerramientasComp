#include <cstdio>

double func (double x){
  return x*x;
}

double integral (int N, double a, double b)
{


}

int main(void){
  int N=1000000;
  double a=0;
  double b=10;
  double delta = (b-a)/N;
  double sum=0.0;
  
#pragma omp parallel for reduction(+:sum)
  
  for(int i = 0 ; i<N ; i++){
    double x = a+delta/2+delta*i;
    sum+=func(x);
  }
  sum*=delta;
  
  printf("%.16f\n", sum);
}
