#include <iostream>
#include <cmath>

double sin_pade(double x);
double sin_aux(double u);
double sinint(double x); //sinint calcula sin(x) para el intervalo [-pi/2;pi/2] con la aproximación de Pade(que es donde funciona tal aproximación) mientras que sin_aux cuenta el intervalo en que está x [-pi/2+n;pi/2+n] con n entero  y calcula sin(x))  con sinint "llevando" a x a tal intervalo usando la periodicidad de la función seno

int main(void)
{
  std::cout.precision(16); // 16 decimal places
  std::cout.setf(std::ios::scientific); // use scientific notation
  
  double x = 0.01;
  while(x<=2*3.1415926535){
    double error = std::fabs((std::sin(x)-sin_pade(x))/std::sin(x));
    std::cout<<x<<"\t"<<error<<"\n";
    x+=0.01;
  }
  
  return 0;
}

double sinint (double x){		
	if(std::fabs(x)<std::pow(10,-8)){
		return x;
	}else if(std::fabs(x)>0.52359877598){
		double u = x/3.0;
		return (3-4*sin_aux(u)*sin_aux(u))*sin_aux(u);
	}else {
		return sin_aux(x);
	}
}

double sin_pade(double x)
{
  if(x<0){
    int n = (x+3.1415926535/2.0)/3.1415926535;
		
		double npi = 3.1415926535*n;
		if(n%2==0){
		  
		  return sinint(x+npi);
		}else{
		  return -sinint(x+npi);
		}
  }else{
    int n = (x+3.1415926535/2.0)/3.1415926535;
    double npi = 3.1415926535*n;
    if(n%2==0){
      return sinint(x-npi);
    }else{
      return -sinint(x-npi);
    }
    
  }
}





double sin_aux(double u)
{
  return u*((1.0-(29693.0/207636)*u*u+(34911.0/7613320)*std::pow(u,4)-(479249.0/11511339840)*std::pow(u,6))/(1.0+(1671.0/69212)*u*u+(97.0/351384)*std::pow(u,4)+(2623.0/1644477120)*std::pow(u,6)));
}
