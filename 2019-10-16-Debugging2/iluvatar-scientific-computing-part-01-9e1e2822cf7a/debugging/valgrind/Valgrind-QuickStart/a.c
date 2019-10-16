#include <stdlib.h>

void f(void)
{
  int* x = malloc(10 * sizeof(int));
  x[9] = 0;        // problem 1: heap block overrun Para coregir se coloca el indice correcto
  free(x);
}                    // problem 2: memory leak -- x not freed

int main(void)
{
  f();
  return 0;
}

//si se coloca un while llamando a f() y ya que no se esta liberando la memoria solcitada por f se va a gastar todo el espacio de la memoria ram, una vez se llena la memoria ram se comienza utilizar espacio de memoria en el disco duro (mucho mas lento)
