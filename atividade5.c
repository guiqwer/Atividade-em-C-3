#include <stdio.h>

int main() {
    int numero, fatorial = 1;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("O fatorial de números negativos não é definido.\n");
    } else {
        for (int i = 1; i <= numero; i++) {
            fatorial *= i;
        }
        printf("O fatorial de %d é %d\n", numero, fatorial);
    }

    return 0;
}
