#include<cstdio>
#include<cmath>

int main (void){

  int a = 2147483644;
  int b = 1;
  while (a>0){
    b=a;
    a+=1;
  }
  std::printf("%d\n",b);

  
  
  return 0;
}
