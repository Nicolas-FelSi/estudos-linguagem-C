#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int soma(int a, int b) {
    float resultado = a+b;
    return resultado;
}

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    int a, b, resultado;

    printf("Digite o 1� n�mero:\n");
    scanf("%d", &a);

    printf("Digite o 2� n�mero:\n");
    scanf("%d", &b);

    resultado = soma(a, b);

    printf("\nA soma entre %d e %d �: %d.\n", a, b, resultado);
}
