#include "sum2.h"

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
