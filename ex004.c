#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    int numero1, numero2, numero3, resultado;

    printf("Digite o primeiro número inteiro:\n");
    scanf("%d", &numero1);

    printf("Digite o segundo número inteiro:\n");
    scanf("%d", &numero2);

    printf("Digite o terceiro número inteiro:\n");
    scanf("%d", &numero3);

    resultado = numero1 * numero2 * numero3;

    printf("\nA multiplicação entre os números %dx%dx%d é: %d.\n", numero1, numero2, numero3, resultado);
}