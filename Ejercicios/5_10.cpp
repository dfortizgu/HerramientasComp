#include "cstdio"
#include "cmath"

typedef double REAL;

REAL exp (REAL x){
	int i = 0
	if(x>=0){
		REAL sum = 0.0;
		REAL term = 1.0;
		while(std::fabs(term)>0.000001){
			sum+ = term;
			term* = x/(i+1);
			i++;
			
		}
		return sum;
	}else{
		REAL sum = 0.0;
		REAL term = 1.0;
		while(std::fabs(term)>0.000001){
			sum+ = term;
			term* = x/(i+1);
			i++;
		}
		return 1/sum;
	}
}

int main (void){
	printf("%f\n", exp(0));
	printf("%f\n", exp(1));
	printf("%f\n", exp(-1));
	printf("%f\n", exp(0.5));
	printf("%f\n", exp(-0.123));
	printf("%f\n", exp(-25.5));

}