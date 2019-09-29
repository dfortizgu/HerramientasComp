#include <cstdio>

int main (void){
	double sum = 0.0;
	for (int i = 1; i < 1000; i++)
	{
		sum+=1.0/i;
		std::printf("%10d %20.16e\n", i,sum);
	}
	return 0;
}