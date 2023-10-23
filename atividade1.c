#include <stdio.h>
#include <stdlib.h>

// A questão pede para imprimir todos os números pares entre 2 e 50. Como são números fixos decidi botar em uma constante.

#define numero_minimo 2
#define numero_maximo 50

int main()
{

  int i = 0;

  for (i = numero_minimo; i <= numero_maximo; i++)
  {
    if (i % 2 == 0)
    {
      printf("%d\n", i);
    }
  }

  return 0;
}