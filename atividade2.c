#include <stdio.h>
#include <stdlib.h>

#define numero_minimo 1
#define numero_maximo 100

int main()
{

  int i = 0;
  int soma = 0;

  for (i = numero_minimo; i <= numero_maximo; i++)
  {
    soma += i;
  }

  printf("A soma dos numeros de 1 até 100 é de %d", soma);

  return 0;
}