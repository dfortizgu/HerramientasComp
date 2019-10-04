#include <cstdio>
#include <cmath>

double sinu (double u){
	return u*((1.0-(29693.0/207636)*u*u+(34911.0/7613320)*u*u*u*u-(479249.0/11511339840)*u*u*u*u*u*u)/(1.0+(1671.0/69212)*u*u+(97.0/351384)*u*u*u*u+(2623.0/1644477120)*u*u*u*u*u*u));


}

double sinint (double x){		
	if(std::fabs(x)<std::pow(10,-8)){
		return x;
	}else if(std::fabs(x)>0.52359877598){
		double u = x/3.0;
		return (3-4*sinu(u)*sinu(u))*sinu(u);
	}else {
		return sinu(x);
	}
}

double sn (double x){
	if(x<0){
		int n = 0;
		while (std::fabs(x+3.1415926535*n)>1.57079632679){
			n++;
		}
		double npi = 3.1415926535*n;
		if(n%2==0){
			return sinint(x+npi);
		}else{
			return -sinint(x+npi);
		}
	}else{
		int n = 0;
		while (std::fabs(x-3.1415926535*n)>1.57079632679){
			n++;
		}
		double npi = 3.1415926535*n;
		if(n%2==0){
			return sinint(x-npi);
		}else{
			return -sinint(x-npi);
		}

	}
}

int main (void){
	double x = -20;
	while (x<-10){
		std::printf("%.16e\t %.16e\t %.16e\t %.16e\n", x, sn(x),std::sin(x), sn(x)-std::sin(x));
		x+=0.01;
	}

	return 0;
}