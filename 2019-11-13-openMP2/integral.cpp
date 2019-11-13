#include <cstdio>

double func (double x){
  return x*x;
}

double integral (int N, double a, double b)
{
  double delta = (b-a)/N;
  double sum=0.0;
  for(int i = 0 ; i<N ; i++){
    double x = a+delta/2+delta*i;
    sum+=func(x);
  }
  sum*=delta;
  return sum;
}

int main(void){
  int N=10000000;
  double a=0;
  double b=10;
  double result = integral(N,a,b);
  printf("%.16f\n", result);
}
