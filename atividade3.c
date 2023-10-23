#include <stdio.h>

int main()
{
  int numero;
  int i;
  int resultado;

  printf("Escolha um numero para realizar a tabuada: ");
  scanf("%d", &numero);

  for (i = 1; i <= 10; i++)
  {
    resultado = numero * i;
    printf("%d x %d = %d\n", numero, i, resultado);
  }

  return 0;
}
