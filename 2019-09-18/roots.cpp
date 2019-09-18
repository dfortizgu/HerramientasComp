#include<cstdio>
#include<cmath>

float x1p(float a, float b, float c){
  float x = 0;
  x=(-b+std::sqrt(b*b-4*a*c))/(2*a);
  return x;
}

float x1n(float a, float b, float c){
  float x = 0;
  x=(-b-std::sqrt(b*b-4*a*c))/(2*a);
  return x;
}

float x2p(float a, float b, float c){
  float x = 0;
  x=(-2*c)/(b+std::sqrt(b*b-4*a*c));
  return x;
}

float x2n(float a, float b, float c){
  float x = 0;
  x=(-2*c)/(b-std::sqrt(b*b-4*a*c));
  return x;
}

//Los errores debido a la cancelación sustractiva va incrementando dependiendo de la función y el signo utilizado

int main (void){
  float a = 1.0;
  float b = 1.0;
  for(int i = 1; i<=10 ; i++){
    float c = std::pow(10,-i);
    std::printf("%10d %10.6f %10.6f %10.6f %10.6f\n", i, x1p(a,b,c), x1n(a,b,c), x2p(a,b,c),x2n(a,b,c));
  }
  
  return 0;
}
