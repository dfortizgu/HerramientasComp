#include "sum3.h"

REAL sum3(int N){
  REAL sum = 0.0;
  for(int i = 1 ; i<=N ; i++ ){
    sum+=1.0/(2*i*(2*i+1));
  }
  return sum;
}
