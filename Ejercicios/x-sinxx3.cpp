#include <cstdio>
#include <cmath>
double func (double x, int N){
	double sum = 1.0/6;
	double term = 1.0/6;
	for (int i = 1; i <=N; ++i)
	{
		term*=(-1.0)*x/((2*i+5)*(2*i+4));
		sum+=term;
	}
	return sum;
}
int main (void){
	double x = 1;
	for (int i = 0; i < 15; ++i)
	{
		printf("%d %.16f\n",i ,func(x,20));
		x/=10;
	}
	return 0;
}