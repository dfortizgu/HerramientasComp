#include <cstdio>
#include <cmath>

double tanu (double u){
	return u*((135135.0-17336.106*u*u+379.23564*u*u*u*u-1.0118625*u*u*u*u*u*u)/(135135.0-62381.106*u*u+3154.9377*u*u*u*u+28.17694*u*u*u*u*u*u));


}

double tanint (double x){	
	if(x<0){	
		if(std::fabs(x)<0.0000000017){
			return x;
		}else if(std::fabs(x)>3.141592653589/4.0){
			double u = -3.141592653589/2.0-x;
			return 1.0/tanu(u);
		}else {
			return tanu(x);
		}
	}else{
		if(std::fabs(x)<0.0000000017){
			return x;
		}else if(std::fabs(x)>3.141592653589/4.0){
			double u = 3.141592653589/2.0-x;
			return 1/tanu(u);
		}else {
			return tanu(x);
		}
	}
}

double tn (double x){
	if(x<0){
		int n = 0;
		while (std::fabs(x+3.1415926535*n)>1.57079632679){
			n++;
		}
		double npi = 3.1415926535*n;
		if(n%2==0){
			return tanint(x+npi);
		}else{
			return -tanint(x+npi);
		}
	}else{
		int n = 0;
		while (std::fabs(x-3.1415926535*n)>1.57079632679){
			n++;
		}
		double npi = 3.1415926535*n;
		if(n%2==0){
			return tanint(x-npi);
		}else{
			return -tanint(x-npi);
		}

	}
}

int main (void){
	double x = -3.141592/2.3;
	while (x<3.141592/2.3){
		std::printf("%.16e\t %.16e\t %.16e\t %.16e\n", x, tn(x),std::tan(x), std::fabs(tn(x)-std::tan(x)));
		x+=0.001;
	}

	return 0;
}