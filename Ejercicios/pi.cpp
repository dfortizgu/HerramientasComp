#include <random>
#include <cstdio>
#include <cmath>

int main (void){
	int seed = 1;
	int acuad = 0;
	int acirc = 0;
	const double PI = 3.14159265358979323846;
	std::mt19937 gen(seed); 
	std::uniform_real_distribution<> dis(0.0, 1.0);
	for (int N = 1; N < 10000; N+=100)
	{
		for (int i = 0; i < N; ++i)
		{
			double x = dis(gen);
			double y = dis(gen);
			double dist = std::hypot(x,y);
			if(dist <= 1.0)
			{
				acirc+=1;
				acuad+=1;
			}else{acuad+=1;}


			if(i%10000==0){
			}

		}
		double pi = 4.0*acirc/acuad;
		double error =std::fabs(PI-pi)/PI*100.0;
		std::printf("%d\t %.16f\t %.16f\n", N , pi, error);
	}
	return 0;
}