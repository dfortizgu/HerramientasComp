#include <cstdio>
#include <omp.h>
#include <vector>
#include <numeric> //Para usar accumulate

double func (double x){
  return x*x;
}

double integral (int N, double a, double b)
{


}

int main(void){
  int N=1000000;
  double a=0;
  double b=10;
  double delta = (b-a)/N;
  double sum=0.0;
  std::vector<double>partial;

  
#pragma omp parallel
  {
    
    int nthreads = omp_get_num_threads(); //Optiene el numero de threads
    double size = N/nthreads; //Tamaño del arrgle
    int tid = omp_get_thread_num(); //Numero del thread
    int init = tid*size; //Indica donde deben iniciar las operaciones en cada thread

    if(0==tid){
      partial.resize(nthreads);
    }
    #pragma omp barrier
    
    for(int i = init ; i<init+size ; i++){
      double x = a+delta/2+delta*i;
      partial[tid]+=func(x);
    }
    partial[tid]*=delta;
  }
  double integral = std::accumulate(partial.begin(),partial.end(),0.0); //Suma las entradas del vector, libreria numeric

  printf("%.16f\n", integral);

}
