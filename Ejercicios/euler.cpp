#include<cstdio>
#include<cmath>

int main (void){
	double sum = 0.0;
	for (int i = 1; i <= 10000000; ++i)
	{
		sum+=1.0/i;
		double euler = sum - std::log(i);
		double eulerplus = sum - std::log(i+0.5);
		double error = std::fabs(0.577215664901532-euler)/0.57721*100;
		double errorplus = std::fabs(0.577215664901532-eulerplus)/0.57721*100;
		if (i%100==0)
		{
			printf("%7d %30.16e %10.9f %30.16e %10.16f\n", i , euler, error, eulerplus, errorplus);
		}
	}
	return 0;
}