#include <random>
#include <iostream>
#include <vector>

int main (void){

  const int NSAMPLES = 10000000;
  int seed = 1;
  
  const double xmin = 0.0;
  const double xmax = 1.0;
  const double dx = 0.001;
  const int nbins = (xmax-xmin)/dx;
  std::vector<double> histo(nbins);  
  std::mt19937 gen(seed);
  std::uniform_real_distribution<> dis(xmin, xmax);
  
  for (int n = 0; n < NSAMPLES; ++n) {
    double r = dis(gen);
    int idx = int(r/dx);
    if (0 <= idx and idx < nbins){
      histo[idx] += 1;
    }
  }
  for(int i = 0; i < nbins; ++i){
    std::cout << xmin + i*dx << "   " << histo[i]/NSAMPLES/dx << "\n";
  }
  return 0;
}
