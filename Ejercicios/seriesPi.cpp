#include <cstdio>
#include <cmath>

double pi (int N){
	double sum = 0.0;
	for (int i = 1; i <= N; ++i)
	{
		sum+=1.0/i/i;
	}
	return std::sqrt(sum*6.0);
}


const double PI = 3.141592653589793238;

int main (void){
	for (int i = 1; i < 50000000; i+=1000000)
	{
		double error = std::fabs(PI-pi(i))*100/PI;
		std::printf("%d\t %.16e\t %.16e\n", i, pi(i), error);
	}
	return 0;
}