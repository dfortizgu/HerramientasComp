#include <cstdio>
#include <cmath>

double arcsinu (double u){
	return u*(1.0+u*u/6.0+0.075*u*u*u*u+0.04464286*std::pow(u,6)+0.03038182*std::pow(u,8)+0.022375*std::pow(u,10)+0.01731276*std::pow(u,12)+0.01433124*std::pow(u,14)+0.009342806*std::pow(u,16)+ 0.01835667*std::pow(u,18)-0.01186224*std::pow(u,20)+0.03162712*std::pow(u,22)); 
}

double arcsin(double x){
	double a = 0.0;
	double b = 0.0;
	double u = 0.0;
	if(std::fabs(x)<0.00000001){
		return x;
	}else if(0.00000001<=std::fabs(x)<1.0/2.0){
		u=x;
		a=0.0;
		b=1.0;
		return a + b*arcsinu(u);
	}else if(1.0/2.0<=std::fabs(x)<std::sqrt(3)/2.0){
		u=2*x*x-1.0;
		a=3.141592653589/4.0;
		b=1.0/2.0;
		return a + b*arcsinu(u);
	}else if(std::sqrt(3)/2.0<=std::fabs(x)<std::sqrt(2+std::sqrt(3))/2.0){
		u=8.0*x*x*x*x-8.0*x*x+1.0;
		a=3.0*3.141592653589/8.0;
		b=1.0/4.0;
		return a + b*arcsinu(u);
	}else if(std::sqrt(2+std::sqrt(3))/2.0<=std::fabs(x)<=1){
		u=std::sqrt((1.0-x)/2.0);
		a=3.141592653589/2.0;
		b=-2;
		return a + b*arcsinu(u);
	}else{return 0;}
}

int main (void){
	double x = 0.0;
	while(x<1.0){
		std::printf("%.16e\t %.16e\n", x, arcsin(x));
		x+=0.001;

	}
	return 0;
}