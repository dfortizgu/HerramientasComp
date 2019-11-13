#include <cstdio>
int main (void)
{
  int a = 9; //Varible compartida
#pragma  omp parallel 
  {
    double x=0; //araile privada, Las direcciones de memoria de cada x es diferente para cada tread
    a+=3;
    //printf("Hello world\n");
    //printf("%p\n",&x); 
    printf("%d\n",a);
      
  }
}
