    #include <omp.h>
    #include <stdio.h>

    int main(int argc, char *argv[]) {
  
      int nthreads, tid;
  
      /* Fork a team of threads with each thread having a private tid variable */
#pragma omp parallel private(tid) //Quitar el private para una variable que es modificada por todos genera errores pues cada thread puede modificar los valores de la variable antes de que la use otro
      {
    
        /* Obtain and print thread id */
        tid = omp_get_thread_num();
        printf("Hello World from thread = %d\n", tid);
    
        /* Only master thread does this */
        if (tid == 0) 
        {
          nthreads = omp_get_num_threads();
          printf("Number of threads = %d\n", nthreads);
        }
    
      }  /* All threads join master thread and terminate */
      return 0;
  
    }
