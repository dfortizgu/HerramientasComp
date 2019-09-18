#include<cstdio>
#include<cmath>

typedef double REAL; //Reemplaza el tipo de variable por double

REAL sum1(int N){
  REAL sum = 0.0;
  REAL sign = -1.0;
  for(int i = 1; i<=2*N ; i++){
    sum+=(sign*i)/(i+1);
    sign*=-1.0;
  }
  return sum;
}

REAL sum2(int N){
  REAL sum = 0.0;
  REAL suma = 0.0;
  REAL sumb = 0.0;
  for(int i = 1 ; i<=N ; i++){
    suma+=-1.0*(2.0*i-1)/(2.0*i);
    sumb+=2*i/(2.0*i+1);
  }
  return suma+sumb;
}

REAL sum3(int N){
  REAL sum = 0.0;
  for(int i = 1 ; i<=N ; i++ ){
    sum+=1.0/(2*i*(2*i+1));
  }
  return sum;
}

int main (void){
  for(int i = 1 ; i<=10000 ; i++){
    REAL D2 = (sum2(i)-sum3(i))/sum3(i);
    REAL D1 = (sum1(i)-sum3(i))/sum3(i);
    printf("%10d %10.16e %10.16e %10.16e  %10.16e %10.16e\n", i ,sum3(i), sum1(i),std::fabs(D1),sum2(i),std::fabs(D2));
  }
  return 0;
}
