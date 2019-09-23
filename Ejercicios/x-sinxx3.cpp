#include <cstdio>
#include <cmath>
int main (void){
	double x = 1.0;
	for (int i = 1; i <=16; ++i)
	{
		double func = (x-std::sin(x));
		if(func==0.0)break;
		printf("%20.16e %20.16f\n", x, func);
		x/=10.0;

	}
	return 0;
}