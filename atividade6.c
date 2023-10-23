#include <stdio.h>

int main()
{
    int num1, num2, num3, auxi;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    if (num1 > num2)
    {
        auxi = num1;
        num1 = num2;
        num2 = auxi;
    }

    if (num2 > num3)
    {
        auxi = num2;
        num2 = num3;
        num3 = auxi;
    }

    if (num1 > num2)
    {
        auxi = num1;
        num1 = num2;
        num2 = auxi;
    }

    printf("Os números em ordem crescente são: %d, %d, %d\n", num1, num2, num3);

    return 0;
}