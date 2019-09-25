#include "sum1.h"

REAL sum1(int N){
  REAL sum = 0.0;
  REAL sign = -1.0;
  for(int i = 1; i<=2*N ; i++){
    sum+=(sign*i)/(i+1);
    sign*=-1.0;
    
  }
  return sum;
}

