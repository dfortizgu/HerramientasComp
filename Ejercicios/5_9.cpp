#include "cmath"
#include "cstdio"

typedef float REAL;

REAL func (REAL x){
	return 5-std::sqrt(25+x*x);
}

int main (void){
	for (REAL i = 0; i <= 1; i+=0.01)
	{
		printf("%f %.16f\n", i,func(i));
	}
}