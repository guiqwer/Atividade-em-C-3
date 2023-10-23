#include <stdio.h>

int main()
{

  int numero1;
  int numero2;
  int operacao;
  int resultado;

  printf("Digite um número: \n");
  scanf("%d", &numero1);

  printf("Digite outro número: \n");
  scanf("%d", &numero2);

  printf("Escolha a operação\n 1 - Soma \n 2 - Subtração \n 3 - Multiplicação \n 4 - Divisão\n");
  scanf("%d", &operacao);

  switch (operacao)
  {
  case 1:
    resultado = numero1 + numero2;
    break;

  case 2:
    resultado = numero1 - numero2;
    break;

  case 3:
    resultado = numero1 * numero2;
    break;

  case 4:
    resultado = numero1 / numero2;
    break;

  default:
    printf("Por favor, selecione uma das opções.");
    return 1;
  }

  printf("O resultado da operação escolhida é %d", resultado);
}