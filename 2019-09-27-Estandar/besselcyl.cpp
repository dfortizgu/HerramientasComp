#include<cstdio>
#include<cmath>
int main (void){
  const double xmin = 0.0;
  const double xmax = 20.0;
  const double dx = 0.1;
  const int NSTEPS = (xmax-xmin)/dx;
  
  for(int i=0 ; i<=NSTEPS ; i++){
    
    double x = xmin + i*dx;
    std::printf("%25.16e\t %25.16e\n", x, std::cyl_bessel_i(1,x));
  }

  return 0; 
}
