#include<cstdio>
#include<cmath>
#include "sum1.h"
#include "sum2.h"
#include "sum3.h"

int main (void){
  for(int i = 1 ; i<=1000 ; i++){
    REAL D2 = (sum2(i)-sum3(i))/sum3(i);
    REAL D1 = (sum1(i)-sum3(i))/sum3(i);
    printf("%10d %10.16e %10.16e %10.16e  %10.16e %10.16e\n", i ,sum3(i), sum1(i),std::fabs(D1),sum2(i),std::fabs(D2));
  }


  

  
  return 0;
}

