#include <stdio.h>

#define inicial 1
#define final 10

int main()
{
  int numero;
  int i;
  int resultado;

  printf("Escolha um numero para realizar a tabuada: ");
  scanf("%d", &numero);

  for (i = inicial; i <= final; i++)
  {
    resultado = numero * i;
    printf("%d x %d = %d\n", numero, i, resultado);
  }

  return 0;
}
