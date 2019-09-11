#include<cmath>
#include<fstream>

int main(void){
  std::ofstream fout("datos.txt");
  double x = 0.23;
  const int N = 10;
  for(x=0.1;x<6.0;x+=0.1){
    double sum = x;
    double term = x;
    for(int i = 2; i<N; i++){
      term = term*(-1)*x*x/((2*i)*(2*i+1));
      sum+=term;
    }
    fout<<x<<"\t"<<sum<<"\t"<< std::sin(x)<<"\n";
  }
  fout.close();
  return 0;
}
